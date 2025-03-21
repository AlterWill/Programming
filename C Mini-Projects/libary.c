#include <stdio.h>
#include <string.h>

//To keep a track of number of data
int lenB=0,lenC=0,lenT=0;

//The main structure
struct bookInfo{
	char bookTitle[100],authorName[100];
	int noOfCopies;
}b[400];

//To store data that may not be added to main structure
struct tempBookInfo{
	char bookTitle[100],authorName[100];
	int noOfCopies;
}c[100],t[100];

//To add a single book to the temporary structure,struct C is used for addition
void inputBookC(int n){
	for(int i=0;i<n;i++){
		printf("Enter the name of the book:");
		scanf("%s",c[i].bookTitle);
		printf("Enter the author name:");
		scanf("%s",c[i].authorName);
		printf("Enter the no of copies:");
		scanf("%d",&c[i].noOfCopies);
		lenC++;
	}
}

//To remove the all data of the temporary structure C
void refreshTempStructureC(){
	for(int i=0;i<100;i++){
		strcpy(c[i].bookTitle,"");
		strcpy(c[i].authorName,"");
		c[i].noOfCopies=0;
	}
	lenC=0;
}

//To remove the all data of the temporary structure T
void refreshTempStructureT(){
	for(int i=0;i<100;i++){
		strcpy(t[i].bookTitle,"");
		strcpy(t[i].authorName,"");
		t[i].noOfCopies=0;
	}
	lenT=0;
}

//when a student takes a book
void issueBook(){
	int flag=0;
	refreshTempStructureC();
	printf("Enter the name of the book:");
	scanf("%s",c[0].bookTitle);
	printf("Enter the author name:");
	scanf("%s",c[0].authorName);
	for(int i=0;i<lenB;i++){
		if(strcmp(b[i].bookTitle,c[0].bookTitle)==0 && strcmp(b[i].authorName,c[0].authorName)==0){
			if(b[i].noOfCopies==0){
				printf("The copy of the book is not available");
			}else{
				b[i].noOfCopies--;
			}
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("The book is not found\n");
	}else{
		printf("The database as been updated\n");
	}
}

//when a student returns the book
void returnBook(){
	int flag=0;
	refreshTempStructureC();
	printf("Enter the name of the book:");
	scanf("%s",c[0].bookTitle);
	printf("Enter the author name:");
	scanf("%s",c[0].authorName);
	for(int i=0;i<lenB;i++){
		if(strcmp(b[i].bookTitle,c[0].bookTitle)==0 && strcmp(b[i].authorName,c[0].authorName)==0){
			b[i].noOfCopies++;
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("The book is not found\n");
	}else{
		printf("The database as been updated\n");
	}
}

//To remove a bulk of books from the main structure
void removeBooks(int n){
	int flag=0;
	refreshTempStructureC();
	refreshTempStructureT();
	for(int i=0;i<n;i++){
		printf("Enter the name of the book:");
		scanf("%s",c[i].bookTitle);
		printf("Enter the author name:");
		scanf("%s",c[i].authorName);
		lenC++;
	}
	for(int i=0;i<lenB;i++){
		flag=0;
		for(int j=0;j<lenC;j++){
			if(strcmp(c[j].bookTitle,b[i].bookTitle)==0 && strcmp(c[j].authorName,b[i].authorName)==0){
				flag=1;
			}
		}
		if(flag==0){
			strcpy(t[lenT].bookTitle,b[i].bookTitle);
			strcpy(t[lenT].authorName,b[i].authorName);
			t[lenT].noOfCopies=b[i].noOfCopies;
			lenT++;
		}
	}
	lenB=lenT;
	for(int i=0;i<lenT;i++){
		strcpy(b[i].bookTitle,t[i].bookTitle);
		strcpy(b[i].authorName,t[i].authorName);
		b[i].noOfCopies=t[i].noOfCopies;
	}
}

//when a student returns a book
void searchBook(){
	int flag=0,e,f,g,a,i,j,k,l,largeStr,largeAuthor;
	refreshTempStructureC();
	refreshTempStructureT();

	printf("Enter the name of the book:");
	scanf("%s",c[0].bookTitle);
	printf("Enter the author name:");
	scanf("%s",c[0].authorName);

	for(i=0;i<lenB;i++){
		if(strcmp(b[i].bookTitle,c[0].bookTitle)==0 && strcmp(b[i].authorName,c[0].authorName)==0){
			strcpy(t[0].bookTitle,b[i].bookTitle);
			strcpy(t[0].authorName,b[i].authorName);
			t[0].noOfCopies=b[i].noOfCopies;
			flag=1;
		}
	}
	e=strlen(t[0].bookTitle);
	f=strlen(t[0].authorName);
	g=t[0].noOfCopies;
	largeStr=(e>14) ? e : 14;
	largeAuthor=(f>16) ? f : 16;
	
	//To put the +---+ heading
	printf("+");
    for(i=0;i<largeStr+2;i++){
		printf("-");
	}
	printf("-");
	for(i=0;i<largeAuthor+2;i++){
		printf("-");
	}
	for(i=0;i<18;i++){
		printf("-");
	}printf("+\n");

	//To put the titles or the heading
	printf("|");
	printf(" Book's Name ");
	e=strlen(" Book's Name ");
	f=largeStr-e;
	for(j=0;j<f;j++){
		printf(" ");
	}
	printf("|");

	e=strlen(" Author's Name ");
	f=largeAuthor-e;
	printf(" Author's Name");
	for(j=0;j<f;j++){
		printf(" ");
	}
	printf("|");

	printf(" The Number of Copies ");
	printf("|\n");	

	printf("+");
	for(k=0;k<largeStr;k++){
	    printf("-");
	}
	printf("+");
    for(k=0;k<largeAuthor-1;k++){
       	printf("-");
    }
   	printf("+");
	for(i=0;i<22;i++){
		printf("-");
	}
	printf("+\n");

	printf("|");
	printf(" %s ",t[0].bookTitle);
	e=strlen(t[0].bookTitle)+2;
	f=largeStr-e;
	for(j=0;j<f;j++){
		printf(" ");
	}
	printf("|");

	e=strlen(t[0].authorName);
	f=largeAuthor-e-2;
	printf(" %s",t[0].authorName);
	for(j=0;j<f;j++){
		printf(" ");
	}
	printf("|");

	e=t[0].noOfCopies;
	a=0;
	printf("%21d ",t[0].noOfCopies);
	printf("|\n");
	
	printf("+");
	for(k=0;k<largeStr;k++){
	    printf("-");
	}
	printf("+");
    for(k=0;k<largeAuthor-1;k++){
       	printf("-");
    }
   	printf("+");
	for(i=0;i<22;i++){
		printf("-");
	}
	printf("+\n");
	refreshTempStructureC();
	if(flag==0){
		printf("The book is not found in the libary");
	}
}

//To add all the books at the beginning
void addBooks(int n){
	int i,j,flag=0;
	refreshTempStructureC();
	inputBookC(n);
	if(lenB==0){
		for(i=0;i<n;i++){
			strcpy(b[i].bookTitle,c[i].bookTitle);
			strcpy(b[i].authorName,c[i].authorName);
			b[i].noOfCopies=c[i].noOfCopies;
			lenB++;
		}
	}else{
		for(i=0;i<n+lenB;i++){
			if(i<=n){
				if(strcmp(c[i].bookTitle,b[i].bookTitle)==0 && strcmp(c[i].authorName,b[i].authorName)==0){
					b[i].noOfCopies+=c[i].noOfCopies;
					strcpy(c[i].bookTitle, "Null");
				}
			}else{
				if(strcmp(c[i].bookTitle,"Null")!=0){
					strcpy(b[i].bookTitle,c[i].bookTitle);
					strcpy(b[i].authorName,c[i].authorName);
					b[i].noOfCopies=c[i].noOfCopies;
					lenB++;
				}
			}
		}
	}
}

//Finding the largest string from the main structure
int lenLargestString(){
	int large=strlen(b[0].bookTitle);
	for(int i=1;i<lenB;i++){
		if(large<strlen(b[i].bookTitle)){
            large=strlen(b[i].bookTitle);
        }
    }
	return large;
}

//Finding the larget author name
int lenLargestAuthorName(){
	int large=strlen(b[0].authorName);
	for(int i=1;i<lenB;i++){
		if(large<strlen(b[i].authorName)){
            large=strlen(b[i].authorName);
        }
    }
	return large;
}

//To display the main structure
void displayTable(){
	int e,f,g,a,i,j,k,l;
	int largeStr=lenLargestString();
    int largeAuthor=lenLargestAuthorName();

	if(largeStr<14){largeStr=14;}
	if(largeAuthor<16){largeAuthor=16;}

	//To put the +---+ heading
	printf("+");
    for(i=0;i<largeStr+2;i++){
		printf("-");
	}
	printf("-");
	for(i=0;i<largeAuthor+2;i++){
		printf("-");
	}
	for(i=0;i<18;i++){
		printf("-");
	}printf("+\n");

	//To put the titles or the heading
	printf("|");
	printf(" Book's Name ");
	e=strlen(" Book's Name ");
	f=largeStr-e;
	for(j=0;j<f;j++){
		printf(" ");
	}
	printf("|");

	e=strlen(" Author's Name ");
	f=largeAuthor-e;
	printf(" Author's Name");
	for(j=0;j<f;j++){
		printf(" ");
	}
	printf("|");

	printf(" The Number of Copies ");
	printf("|\n");	

	printf("+");
	for(k=0;k<largeStr;k++){
	    printf("-");
	}
	printf("+");
    for(k=0;k<largeAuthor-1;k++){
       	printf("-");
    }
   	printf("+");
	for(i=0;i<22;i++){
		printf("-");
	}
	printf("+\n");

	printf("|");
	printf(" %s ",b[0].bookTitle);
	e=strlen(b[0].bookTitle)+2;
	f=largeStr-e;
	for(j=0;j<f;j++){
		printf(" ");
	}
	printf("|");

	e=strlen(b[0].authorName);
	f=largeAuthor-e-2;
	printf(" %s",b[0].authorName);
	for(j=0;j<f;j++){
		printf(" ");
	}
	printf("|");

	e=b[0].noOfCopies;
	a=0;
	printf("%21d ",b[0].noOfCopies);
	printf("|\n");

    for(i=1;i<lenB;i++){
		printf("+");
		for(k=0;k<largeStr;k++){
	        printf("-");
	    }
	    printf("+");
    	for(k=0;k<largeAuthor-1;k++){
        	printf("-");
	    }
    	printf("+");
		for(l=0;l<22;l++){
			printf("-");
		}
		printf("+\n");


		printf("|");
		printf(" %s ",b[i].bookTitle);
		e=strlen(b[i].bookTitle);
		f=largeStr-e-2;
		for(j=0;j<f;j++){
			printf(" ");
		}
		printf("|");

		e=strlen(b[i].authorName);
		f=largeAuthor-e-2;
		printf(" %s",b[i].authorName);
		for(j=0;j<f;j++){
			printf(" ");
		}
		printf("|");

		e=b[i].noOfCopies;
		a=0;
		printf("%21d ",b[i].noOfCopies);
		printf("|\n");
	}
	printf("+");
    for(l=0;l<largeStr+2;l++){
		printf("-");
	}
	printf("-");
	for(l=0;l<largeAuthor+1;l++){
		printf("-");
	}
	for(l=0;l<19;l++){
		printf("-");
	}
	printf("+\n");
}

void main(){
	int choice,ch=1,no;
	while(ch){
		printf("\n--- Library Management Menu ---\n");
    	printf("1. Add Books\n");
	    printf("2. Remove Books\n");
    	printf("3. Display Database\n");
	    printf("4. Search Book\n");
    	printf("5. Issue Book\n");
	    printf("6. Return Book\n");
    	printf("7. Exit\n");
	    printf("Enter your choice: ");
    	scanf("%d", &choice);
		printf("\n");
		switch (choice){
			case 1:
				printf("Enter the number of books to be added:");
				scanf("%d",&no);
				addBooks(no);
				no=0;
				break;
			case 2:
				printf("Enter the number of books to be removed:");
				scanf("%d",&no);
				removeBooks(no);
				no=0;
				break;
			case 3:
				displayTable();
				break;
			case 4:
				searchBook();
				break;
			case 5:
				issueBook();
				break;
			case 6:
				returnBook();
				break;
			case 7:
				ch=0;
				break;
			default:
				printf("Invalid input\n");
		}
	}
}