const prompt = require("prompt-sync")()
const name = prompt("What is your name:")
console.log(name)

const shouldWePlay = prompt('Do you want to play?:');
if (shouldWePlay.toLowerCase()==="yes") {
    const leftOrRight = prompt("You entered a maze,do you want to go left or right")
    if(leftOrRight.toLowerCase()==="left"){
        console.log("You go left and see a bridge")
        const cross = prompt("Do you want to cross the bridge? ").toLowerCase()
        if (cross === "yes" || cross==="y"){
            console.log("You cross the bridge but it was too weak and it broke and you fell.You lost")
        }else{
            console.log("Good choice... You win")
        }
    }else{
        console.log("You go right and fall off a cliff...");
    }
}else if(shouldWePlay.toLowerCase()==="no"){
    console.log("Okay :(")
}else{
    console.log("Invalid statement...")
}