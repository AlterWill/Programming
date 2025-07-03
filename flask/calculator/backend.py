from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def main_page():
    return render_template("frontend.html")

@app.route("/calculator", methods=["POST"])
def calculate():
    try:
        num1 = float(request.form['num1'])
        num2 = float(request.form['num2'])
        operation = request.form['operation']

        if operation == 'add':
            result = num1 + num2
        elif operation == 'sub':
            result = num1 - num2
        elif operation == 'mul':
            result = num1 * num2
        elif operation == 'div':
            if num2 == 0:
                return render_template("frontend.html", error="Cannot divide by zero!")
            result = num1 / num2
        else:
            return render_template("frontend.html", error="Invalid operation!")

        return render_template("frontend.html", result=round(result, 2))

    except ValueError:
        return render_template("frontend.html", error="Please enter valid numbers!")
    except Exception as e:
        return render_template("frontend.html", error=f"An error occurred: {str(e)}")

if __name__ == "__main__":
    app.run(debug=True)
