#include <iostream>
#include <string>
using namespace std;
string player1,player2,word,underscore,guess;
int wrong=0;
int main (){
string copy = word;


cout << "----------------------Sveiki! Laipni lūdzam PAKĀRŠANĀS spēlē!----------  ----------" << endl;
cout << "Lūdzu, ierakstiet savu vārdu, PLAYER 1" << endl;
cin >> player1;
cout << "Lūdzu, ierakstiet savu vārdu, PLAYER 2" << endl;
cin >> player2;
cout << "Labi " << player1 << " un " << player2 << ". Sāksim ar spēli!" << endl;
cout << player1 << " lūdzu ievadiet vārdu kuru jūs vēlaties " << player2 << " lai  uzminētu." << endl;

cin >> word;

//atstarpe
for (int x=0; x<30; x++){
cout << endl;
}

//APSKATS
while (underscore.size() != word.size()){
underscore.push_back('_');}

cout << underscore << endl;

//galvenais kamēr
while(wrong<12){
cin >> guess;

//JA UZMINI NAV BURTS
if(guess.size() > 1){
if(guess==word){
cout << "Šis ir pareizais vārds." << endl;
break;
}
else{
cout << underscore << endl;
cout << "Nepareizs vārds mēģini vēlreizs." << endl;
cout << "Lietots: " << endl;
wrong ++;
}

    }





if(underscore == word){
  cout << "You win!" << endl;
  break;
}



if(wrong==1){
cout << "I" << endl;
}
else if(wrong==2){
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==3){
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==4){
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==5){
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==6){
cout << "I===" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==7){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==8){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I  |" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==9){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==10){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|-" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==11){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|-" << endl;
cout << "I |"  << endl;
cout << "I" << endl;
}
else if(wrong==12){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|-" << endl;
cout << "I | |"<< endl;
cout << "I Tu esi miris" << endl;

cout << "Spēles beigas vecais! Vārds bija: " << word <<endl;
break;
}
}
}