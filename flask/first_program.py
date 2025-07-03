from flask import Flask
app = Flask(__name__)

@app.route("/")
def main():
    return "this is main"

@app.route("/home")
def home():
    return "this is my home"

if __name__ == "__main__":
    app.run
