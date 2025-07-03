const input=require("prompt-sync")()

function printInfo(){
    console.log("Contact management system")
    console.log("-------------------------")
    console.log("1-Add Contact")
    console.log("2-Remove Contact")
    console.log("3-View Contact")
    console.log("4-Search Contact")
    console.log("5-Exit")
}

function addContact(){
    const name=input("Enter the name:")
    const email=input("Enter the email:")
    const contact={
        name:name,
        email:email
    }
    contacts.push(contact)
}

function removeContact(){
    /*let name=input("Name:")
    for(let i = contacts.length -1;i>=0;i--){
        if(name===contacts[i].name){
            contacts.splice(i,1)
        }
    }*/
    console.log("Contact IDs")
    for (let i=0;i<contacts.length;i++){
        const contact = contacts[i]
        console.log((i+1).toString() + ":",contact.name)
    }
    const number = parseInt(input("Enter an ID:"))
    if(isNaN(number) || number > contacts.length){
        console.log("Invalid.")
        return
    }
    contacts.splice(number - 1,1)
    console.log("Removed.")
}

function displayContact(contacts){
    for(let contact of contacts){
        console.log("---------------------")
        console.log("Name:",contact.name)
        console.log("Email:",contact.email)
    }
    console.log("---------------------")
}

function searchContact(){
    /*let flag=0
    let name=input("Name:")
    for(let contact of contacts){
        if(name===contact.name){
            console.log(contact.name)
            console.log(contact.email)
            flag=1
        }
    }
    if(flag=0){
        console.log("The contact is not found")
    }*/
    const searchString = input("Search: ").toLowerCase()
    const result = [];
    for(let contact of contacts){
        if (contact.name.toLowerCase().includes(searchString)){
            result.push(contact)
        }
    }
    displayContact(result)
}



const contacts=[]
printInfo()
let choice=true
while(choice){
    let decision=input("Enter your choice:")
    switch (decision){
        case '1':
            addContact()
            break
        case '2':
            removeContact()
            break
        case '3':
            displayContact(contacts)//pass contents
            break
        case '4':
            searchContact()
            break
        case '5':
            choice=false
            break
        default:
            console.log("Invaild input.Try again...")
            break
    }
}