#include<iostream>
#include<fstream>//read write file
#include<ctime>//seed a random function function
#include<string>
using namespace std;

int main(){
    char start{};

cout<<"lets play Hangman!"<<endl;
cout<<" __________ "<<endl;
cout<<"|     |     "<<endl;
cout<<"|     o    "<<endl;
cout<<"|    /0\\   "<<endl;
cout<<"|   / o \\  "<<endl;
cout<<"|    / \\   "<<endl;
cout<<"|   /   \\  "<<endl;
cout<<"Press a key to start"<<endl;
cin>>start;
//GAME
//set variables used throughout game


int attempts{7};
string Word;//word to be guessed
string WordList[99];//array of 100 strings
//get random word
srand(time(NULL));//creates a random seed used to get a random word from the array above
ifstream RandomWord;//file stream reads in the word
RandomWord.open("words.txt");
 for(int i=0;i<90;i++){
    RandomWord>>WordList[i];//filling the array with words from the list
    //cout<<WordList[i]<<endl; for testing
 }

int RandomNum=rand()%100;//returns a random num btw 0 to 99
Word=WordList[RandomNum];
//cout<<Word<<endl;
//RandomWord.close();
string MysteryWord(Word.length(),'*');


cout<<"The mystery word is "<<MysteryWord<<endl;

char c;

bool l=true;
bool win=false;
char arr[Word.length()]{};

while(attempts!=-1 && win==false){
        bool not_found =true;
    cout<<"guess a letter";
    cin>>c;
    for(int i=0;i<Word.length();i++){
        if(c==Word[i]){


                       MysteryWord[i]=c;

not_found=false;
                    }


                    }
                    cout<<  MysteryWord<<endl;



if(MysteryWord==Word){
    cout<<"WoW you guessed it!";
    win=true;
}
if(not_found==true){


    switch(attempts){
     case 7:
cout<<" __________ "<<endl;
cout<<"|     |     "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
    attempts--;
    break;

     case 6:
cout<<" __________ "<<endl;
cout<<"|     |     "<<endl;
cout<<"|     o     "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
    attempts--;
         break;
     case 5:
cout<<" __________ "<<endl;
cout<<"|     |     "<<endl;
cout<<"|     o     "<<endl;
cout<<"|     0     "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
 attempts--;
         break;
     case 4:
cout<<" __________ "<<endl;
cout<<"|     |     "<<endl;
cout<<"|     o     "<<endl;
cout<<"|    /0     "<<endl;
cout<<"|   /       "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
       attempts--;
         break;
     case 3:
cout<<" __________ "<<endl;
cout<<"|     |     "<<endl;
cout<<"|     o    "<<endl;
cout<<"|    /0\\   "<<endl;
cout<<"|   /   \\  "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
      attempts--;
         break;
     case 2:
cout<<" __________ "<<endl;
cout<<"|     |     "<<endl;
cout<<"|     o    "<<endl;
cout<<"|    /0\\   "<<endl;
cout<<"|   / o \\  "<<endl;
cout<<"|           "<<endl;
cout<<"|           "<<endl;
        attempts--;
         break;
     case 1:
cout<<" __________ "<<endl;
cout<<"|     |     "<<endl;
cout<<"|     o    "<<endl;
cout<<"|    /0\\   "<<endl;
cout<<"|   / o \\  "<<endl;
cout<<"|    /      "<<endl;
cout<<"|   /       "<<endl;
        attempts--;
         break;
     case 0:
cout<<" __________ "<<endl;
cout<<"|     |     "<<endl;
cout<<"|     o    "<<endl;
cout<<"|    /0\\   "<<endl;
cout<<"|   / o \\  "<<endl;
cout<<"|    / \\   "<<endl;
cout<<"|   /   \\  "<<endl;
cout<<"UH OH GAME OVER!";
         attempts=-1;
         break;
     default:
        cout<<"error";


    }


}
}

}
