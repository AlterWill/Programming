from flask import Flask, render_template, request, redirect, url_for
import os

app = Flask(__name__)

@app.route("/")
def main_page():
    return render_template("frontend.html")  # Fixed template name

@app.route("/register")
def register():
    return render_template("register.html")

@app.route("/createaccount", methods=['POST'])
def create_db():
    try:
        username = request.form["username"]
        password = request.form["password"]
        email_id = request.form["email id"]  # Fixed to match HTML form

        # Check if username already exists
        if os.path.exists("datafile.txt"):
            with open("datafile.txt", "r") as file:
                content = file.read()
                if f"Username: {username}\n" in content:
                    return render_template("register.html", error="Username already exists!")

        # Save user data
        with open("datafile.txt", "a") as file:
            file.write(f"Username: {username}\n")
            file.write(f"Password: {password}\n")
            file.write(f"Email ID: {email_id}\n")
            file.write("------\n")

        return render_template("register.html", success="Your Account is Successfully Created! You can now login.")

    except KeyError as e:
        return render_template("register.html", error=f"Missing field: {str(e)}")
    except Exception as e:
        return render_template("register.html", error=f"An error occurred: {str(e)}")

@app.route("/login", methods=['POST'])
def login():
    try:
        username = request.form['username']
        password = request.form['password']

        if not os.path.exists("datafile.txt"):
            return render_template("frontend.html", error="No users registered yet!")

        # Read and parse user data properly
        with open("datafile.txt", "r") as file:
            content = file.read()

        # Split by separator to get individual user records
        user_records = content.split("------\n")

        for record in user_records:
            if record.strip():  # Skip empty records
                lines = record.strip().split('\n')
                if len(lines) >= 3:
                    stored_username = lines[0].replace("Username: ", "").strip()
                    stored_password = lines[1].replace("Password: ", "").strip()

                    if stored_username == username and stored_password == password:
                        return render_template("success.html", username=username)

        return render_template("frontend.html", error="Invalid username or password!")

    except KeyError:
        return render_template("frontend.html", error="Please fill in all fields!")
    except Exception as e:
        return render_template("frontend.html", error=f"An error occurred: {str(e)}")

if __name__ == "__main__":
    app.run(debug=True)
