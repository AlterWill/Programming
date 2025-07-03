// {questions:[{question:the question to be asked,
// options:[user pick the option to answer],
// answer:contains the answer},{},{},etc]}

const input = require("prompt-sync")()
const fs = require("fs")

function loadQuestion(){
    try{
        const data =fs.readFileSync("question.json","utf8")
        const questions = JSON.parse(data).questions
        return questions
    }
    catch(e){
        console.log("Error occured loading file",e)
        return []
    }
}

const questions=loadQuestion()
for(let question of questions){
    console.log(question.question)
    console.log("\n")
    console.log("The options are")
    for(let i=0;i<4;i++){
        console.log(i+1,'-',question.options[i])
    }
    let ch=true
    while(ch){
        let option=0
        let answer=parseInt(input("Enter the answer(1,2,3,4):"))
        if(answer<1 || answer>4){
            console.log("Invalid Input.Try again...\n")
            continue
        }
        if(question.options[answer-1]==question.answer){
            ch=false
            console.log("It is the correct answer\n")
            option=1
            break;
        }
        if(option==0){
            console.log("It is the wrong answer\n")
        }
    }
}
