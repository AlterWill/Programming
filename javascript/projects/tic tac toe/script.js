const input=require("prompt-sync")()

//displays the board of X and O
function displayCurrentBoard(array){
    console.clear()
    console.log("The current board is:")
    console.log("+-----------+")
    console.log(`| ${array[0][0]} | ${array[0][1]} | ${array[0][2]} |`)
    console.log("+---+---+---+")
    console.log(`| ${array[1][0]} | ${array[1][1]} | ${array[1][2]} |`)
    console.log("+---+---+---+")
    console.log(`| ${array[2][0]} | ${array[2][1]} | ${array[2][2]} |`)
    console.log("+-----------+\n\n")
}

//displays the board where user can put their input
function displayBoard(){
    console.log("+---+---+---+")
    console.log("| 1 | 2 | 3 |")
    console.log("+---+---+---+")
    console.log("| 4 | 5 | 6 |")
    console.log("+---+---+---+")
    console.log("| 7 | 8 | 9 |")
    console.log("+---+---+---+\n\n")
}

//displays the menu
function displayOptions(){
    console.clear()
    console.log("\n+=====================================+");
    console.log("|          ✨ TIC-TAC-TOE ✨          |");
    console.log("+=====================================+");
    console.log("| [1] 🆚 Play Against Another Player  |");
    console.log("| [2] 🤖 Play Against Computer        |");
    console.log("| [3] 🚪 Exit                         |");
    console.log("+=====================================+\n");
}

//displays check if the game is over 
function winCondition(array){
    let gameOver=false
    //row 1
    if (array[0][0]==array[0][1] && array[0][1]==array[0][2] && array[0][0]=="X"){
        gameOver=true
    }else if(array[0][0]==array[0][1] && array[0][1]==array[0][2] && array[0][0]=="O"){
        gameOver=true
    }
    //row 2
    if (array[1][0]==array[1][1] && array[1][1]==array[1][2] && array[1][0]=="X"){
        gameOver=true
    }else if(array[1][0]==array[1][1] && array[1][1]==array[1][2] && array[1][0]=="O"){
        gameOver=true
    }
    //row 3
    if (array[2][0]==array[2][1] && array[2][1]==array[2][2] && array[2][0]=="X"){
        gameOver=true
    }else if(array[2][0]==array[2][1] && array[2][1]==array[2][2] && array[2][0]=="O"){
        gameOver=true
    }
    //diagonal 1
    if (array[0][0]==array[1][1] && array[1][1]==array[2][2] && array[1][1]=="X"){
        gameOver=true
    }else if(array[0][0]==array[1][1] && array[1][1]==array[2][2] && array[1][1]=="O"){
        gameOver=true
    }
    //diagonal 2
    if (array[2][0]==array[1][1] && array[1][1]==array[0][2] && array[0][2]=="X"){
        gameOver=true
    }else if(array[2][0]==array[1][1] && array[1][1]==array[0][2] && array[0][2]=="O"){
        gameOver=true
    }
    //coloum 1
    if (array[0][0]==array[1][0] && array[1][0]==array[2][0] && array[0][0]=="X"){
        gameOver=true
    }else if(array[0][0]==array[1][0] && array[1][0]==array[2][0] && array[0][0]=="O"){
        gameOver=true
    }
    //coloum 2
    if (array[0][1]==array[1][1] && array[1][1]==array[2][1] && array[0][1]=="X"){
        gameOver=true
    }else if(array[0][1]==array[1][1] && array[1][1]==array[2][1] && array[0][1]=="O"){
        gameOver=true
    }
    //coloum 3
    if (array[0][2]==array[1][2] && array[1][2]==array[2][2] && array[0][2]=="X"){
        gameOver=true
    }else if(array[0][2]==array[1][2] && array[1][2]==array[2][2] && array[0][2]=="O"){
        gameOver=true
    }
    return gameOver
}

//Return the winner of the game
function checkWinner(array){
    let gameOver=""
    //row 1
    if (array[0][0]==array[0][1] && array[0][1]==array[0][2] && array[0][0]=="X"){
        gameOver=array[0][0]
    }else if(array[0][0]==array[0][1] && array[0][1]==array[0][2] && array[0][0]=="O"){
        gameOver=array[0][0]
    }
    //row 2
    if (array[1][0]==array[1][1] && array[1][1]==array[1][2] && array[1][0]=="X"){
        gameOver=array[1][0]
    }else if(array[1][0]==array[1][1] && array[1][1]==array[1][2] && array[1][0]=="O"){
        gameOver=array[1][0]
    }
    //row 3
    if (array[2][0]==array[2][1] && array[2][1]==array[2][2] && array[2][0]=="X"){
        gameOver=array[2][0]
    }else if(array[2][0]==array[2][1] && array[2][1]==array[2][2] && array[2][0]=="O"){
        gameOver=array[2][0]
    }
    //diagonal 1
    if (array[0][0]==array[1][1] && array[1][1]==array[2][2] && array[1][1]=="X"){
        gameOver=array[1][1]
    }else if(array[0][0]==array[1][1] && array[1][1]==array[2][2] && array[1][1]=="O"){
        gameOver=array[1][1]
    }
    //diagonal 2
    if (array[2][0]==array[1][1] && array[1][1]==array[0][2] && array[0][2]=="X"){
        gameOver=array[1][1]
    }else if(array[2][0]==array[1][1] && array[1][1]==array[0][2] && array[0][2]=="O"){
        gameOver=array[1][1]
    }
    //coloum 1
    if (array[0][0]==array[1][0] && array[1][0]==array[2][0] && array[0][0]=="X"){
        gameOver=array[0][0]
    }else if(array[0][0]==array[1][0] && array[1][0]==array[2][0] && array[0][0]=="O"){
        gameOver=array[0][0]
    }
    //coloum 2
    if (array[0][1]==array[1][1] && array[1][1]==array[2][1] && array[0][1]=="X"){
        gameOver=array[0][1]
    }else if(array[0][1]==array[1][1] && array[1][1]==array[2][1] && array[0][1]=="O"){
        gameOver=array[0][1]
    }
    //coloum 3
    if (array[0][2]==array[1][2] && array[1][2]==array[2][2] && array[0][2]=="X"){
        gameOver=array[0][2]
    }else if(array[0][2]==array[1][2] && array[1][2]==array[2][2] && array[0][2]=="O"){
        gameOver=array[0][2]
    }
    return gameOver
}

//checks if the user or computer move is valid
// array-the data about the board
//move-which square did the computer or player moved
//side-which sides played it? X or O
function validMove(array,move,side){
    let done=true
    switch (move){
        case 1:
            if(array[0][0]==" "){
                array[0][0]=side
                break
            }else{
                console.log("Invalid input.Try again...")
                done=false
                break
            }
        case 2:
            if(array[0][1]==" "){
                array[0][1]=side
                break
            }else{
                console.log("Invalid input.Try again...")
                done=false
                break
            }
        case 3:
            if(array[0][2]==" "){
                array[0][2]=side
                break
            }else{
                console.log("Invalid input.Try again...")
                done=false
                break
            }
        case 4:
            if(array[1][0]==" "){
                array[1][0]=side
                break
            }else{
                console.log("Invalid input.Try again...")
                done=false
                break
            }
        case 5:
            if(array[1][1]==" "){
                array[1][1]=side
                break
            }else{
                console.log("Invalid input.Try again...")
                done=false
                break
            }
        case 6:
            if(array[1][2]==" "){
                array[1][2]=side
                break
            }else{
                console.log("Invalid input.Try again...")
                done=false
                break
            }
        case 7:
            if(array[2][0]==" "){
                array[2][0]=side
                break
            }else{
                console.log("Invalid input.Try again...")
                done=false
                break
            }
        case 8:
            if(array[2][1]==" "){
                array[2][1]=side
                break
            }else{
                console.log("Invalid input.Try again...")
                done=false
                break
            }
        case 9:
            if(array[2][2]==" "){
                array[2][2]=side
                break
            }else{
                console.log("Invalid input.Try again...")
                done=false
                break
            }
        default:
            console.log("Invalid input.Try again...")
            done=false
            break
    }
    return done
}

//The player's move
function playerMove(array,side){
    let playerChoice=parseInt(input("Enter your move:"))
    while(true){
        if(validMove(array,playerChoice,side)==true){
            break
        }else{
            playerChoice=parseInt(input("Enter your move:"))
        }
    }
}

//The computer's move
function computerMove(array,side){
    let computerChoice=Math.floor(Math.random() * 9)+1
    while(true){
        if(validMove(array,computerChoice,side)==true){
            break
        }else{
            computerChoice=Math.floor(Math.random() * 9)+1
        }
    }
}

let boardData=[[" "," "," "],[" "," "," "],[" "," "," "]];
let ch=true
let previousWinner="";
let a=1

while(ch){
    if(a==1){
        displayOptions()
        a++
    }else{
        displayOptions()
        previousWinner=checkWinner(boardData);
        let count= 0
        for(let i=0;i<9;i++){
            row=Math.floor(i/3)
            col=i%3
            if(boardData[row][col]!=" "){
               count++
            }
        
        }
        if(count===9 && checkWinner(boardData)===""){
            console.log("The previous game was a tie")
        }else{
            console.log(`The previous game's winner is ${checkWinner(boardData)}`)
        }
        boardData=[[" "," "," "],[" "," "," "],[" "," "," "]];
    }
    
    let userChoice = parseInt(input("Enter the game mode:"))
    console.log("\n")
    if(userChoice<1 || userChoice>3){
        console.log("Invalid input.Try again...")
        continue
    }else{
        switch (userChoice){
            case 1:
                for(let i=0;i<5;i++){
                    if(i<1){
                        displayBoard()
                        console.log("It is X's turn")
                        playerMove(boardData,"X")
                        displayCurrentBoard(boardData)
                        displayBoard()
                        console.log("It is O's turn")
                        playerMove(boardData,"O")
                    }else if(i>0 && i<2){
                        displayCurrentBoard(boardData)
                        displayBoard()
                        console.log("It is X's turn")
                        playerMove(boardData,"X")
                        displayCurrentBoard(boardData)
                        displayBoard()
                        console.log("It is O's turn")
                        playerMove(boardData,"O")
                    }else if(i>1 && i<4){
                        displayCurrentBoard(boardData)
                        displayBoard()
                        console.log("It is X's turn")
                        playerMove(boardData,"X")
                        if(winCondition(boardData)){
                            break
                        }
                        displayCurrentBoard(boardData)
                        displayBoard()
                        console.log("It is O's turn")
                        playerMove(boardData,"O")
                        if(winCondition(boardData)){
                            break
                        }
                    }else{
                        displayCurrentBoard(boardData)
                        displayBoard()
                        console.log("It is X's turn")
                        playerMove(boardData,"X")
                        if(winCondition(boardData)){
                            break
                        }else{
                            displayCurrentBoard(boardData)
                            console.log("It is a tie\n")
                        }
                    }
                }
                break
            case 2:
                let userSide=input("Do you wish to play as 'X'?(y/n):").toLowerCase()
                let ch2=true
                while(ch2){
                    if(userSide=='y' || userSide=='yes'){
                        ch2=false
                        for(let i=0;i<5;i++){
                            if(i<1){    
                                displayBoard()
                                console.log("It is the player's turn")
                                playerMove(boardData,"X")
                                computerMove(boardData,"O")
                            }else if(i>0 && i<2){
                                displayCurrentBoard(boardData)
                                displayBoard()
                                console.log("It is the player's turn")
                                playerMove(boardData,"X")
                                computerMove(boardData,"O")
                            }else if(i>1 && i<4){
                                displayCurrentBoard(boardData)
                                displayBoard()
                                console.log("It is the player's turn")
                                playerMove(boardData,"X")
                                if(winCondition(boardData)){
                                    break
                                }
                                computerMove(boardData,"O")
                                if(winCondition(boardData)){
                                    break
                                }
                            }else{
                                displayCurrentBoard(boardData)
                                displayBoard()
                                console.log("It is the player's turn")
                                playerMove(boardData,"X")
                                if(winCondition(boardData)){
                                    break
                                }else{
                                    displayCurrentBoard(boardData)
                                    console.log("It is a tie\n")
                                }
                            }
                        }
                    }else if(userSide=='n' || userSide=="no"){
                        ch2=false
                        for(let i=0;i<5;i++){
                            if(i<1){
                                computerMove(boardData,"X")
                                displayCurrentBoard(boardData)
                                displayBoard()
                                console.log("It is the player's turn")
                                playerMove(boardData,"O")
                            }else if(i>0 && i<2){
                                computerMove(boardData,"X")
                                displayCurrentBoard(boardData)
                                displayBoard()
                                console.log("It is the player's turn")
                                playerMove(boardData,"O")
                            }else if(i>1 && i<4){
                                computerMove(boardData,"X")
                                if(winCondition(boardData)){
                                    break
                                }
                                displayCurrentBoard(boardData)
                                displayBoard()
                                console.log("It is the player's turn")
                                playerMove(boardData,"O")
                                if(winCondition(boardData)){
                                    break
                                }
                            }else{
                                computerMove(boardData,"X")
                                if(winCondition(boardData)){
                                    break
                                }else{
                                    displayCurrentBoard(boardData)
                                    console.log("It is a tie\n")
                                }
                            }
                        }
                    }else{
                        console.log("Invalid input.Try again...\n")
                        userSide=input("Do you wish to play as 'X'?(y/n):").toLowerCase()
                    }
                }
                break
            case 3:
                ch=false
                break
            default:
                console.log("Invalid Input.Try again...\n")
        }
    }
}