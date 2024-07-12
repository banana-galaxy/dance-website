from flask import Flask, render_template, url_for

app = Flask(__name__, static_folder="static")
#app = Flask(__name__, template_folder='templateFiles', static_folder='staticFiles')
#app.url_for('static', filename='styles.css')

@app.route('/')
def home():
    return render_template('index.html')
