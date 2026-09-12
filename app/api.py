from flask import Flask

app=Flask(__name__)

@app.route("/usuarios",methods=["GET"])
def usuarios():
    return    {"mensagem":"API funcionando!"}

if __name__ == "__main__":
      app.run(debug=True)
