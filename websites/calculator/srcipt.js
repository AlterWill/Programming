let temData =[]
let answer=0
let displayString=''

function store(n){
    let a=temData.length
    if (temData.length === 0 || ['+', '-', 'x', '÷'].includes(temData[a - 1])) {
        temData.push(n);
    }else{
        if (n === '.') {
            if (!temData[a - 1].includes('.')) {
                temData[a - 1] += n;
            }
        } else {
            temData[a - 1] += n;
        }
    }
    console.log(temData);
}

function signstore(n) {
    temData.push(n);
    console.log(temData);
}

function display(){
    let len=temData.length
    let number1,number2,data=[]
    for(let i=0;i<len;i++){
        if(temData[i]!='+' && temData[i]!='-' && temData[i]!='x' && temData[i]!='÷'){
            data.push(parseFloat(temData[i]));
        }else{
            data.push(temData[i]);
        }
    }
    for(let i=0;i<len;i++){
        if(data[i]=='x'){
            data[i]=data[i-1]*data[i+1]
            data.splice(i-1,1)
            data.splice(i,1)
            console.log(data)
        }
        if(data[i]=='÷'){
            data[i]=data[i-1]/data[i+1]
            data.splice(i-1,1)
            data.splice(i,1)
            console.log(data)
        }
    }
    len=data.length
    for(let i=0;i<len;i++){
        if(data[i]=='+'){
            data[i]=parseFloat(data[i-1])+parseFloat(data[i+1])
            data.splice(i-1,1)
            data.splice(i,1)
            console.log(temData)
        }
        if(data[i]=='-'){
            data[i]=data[i-1]-data[i+1]
            data.splice(i-1,1)
            data.splice(i,1)
            console.log(data)
        }
    }
    console.log(data)
    const displayOutput=document.getElementById("display")
    if(isNaN(data[0])){
        displayOutput.innerHTML = "Error"
    }else{
        displayOutput.innerHTML = data[0]
    }
    answer=data[0]
    clearData()
}

function clearData(){
    let len=temData.length
    temData.splice(0,len)
    console.log(temData)
    displayString=''
}

function appendOnDisplay(n){
    let displayOutput=document.getElementById("display")
    displayString+=n
    displayOutput.innerHTML=displayString;
    if (n != '+' && n != '-' && n != 'x' && n != '÷') {
        store(n);
    } else {
        signstore(n);
    }
    
}

function AC(){
    let len=temData.length
    temData.splice(0,len)
    console.log(temData)
    const displayOutput=document.getElementById("display")
    displayString=''
    displayOutput.innerHTML=displayString;
}