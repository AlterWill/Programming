from flask import Flask,render_template,request
app = Flask(__name__)

@app.route("/")
def main_page():
    return render_template("frontend.html")

@app.route("/login", methods=["POST"])
def loginForm():
    try:
        data = {"admin": "password123", "user": "mypass"}
        username = request.form["username"]
        password = request.form["password"]

        if username in data and data[username] == password:
            return "You have logged in successfully!"
        else:
            return "Invalid username or password. Please try again."

    except KeyError:
        return "Missing username or password field"
    except Exception as e:
        return f"There has been an error: {str(e)}"


if __name__ == "__main__":
    app.run(debug=True)
