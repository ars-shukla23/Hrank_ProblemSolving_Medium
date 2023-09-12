#include <bits/stdc++.h>

using namespace std;

string time_in_words(int hours,int minutes,string words[]){
    string final_time;
    string m;
    string h=words[hours];
   
    if(minutes==0){
        final_time=h+"o' clock";
    }
    else if(minutes>=1 && minutes<=30){
        if(minutes==15){
            m="quarter";
        }
        else if(minutes==30){
            m="half";
        }
        else if(minutes==1){
            m="one minute";
        }
        else{
            m=words[minutes]+"minutes";
        }
        final_time=m+" past "+h;
    }
    else if(minutes>30){
        h=words[hours+1];
        if(minutes==45){
            m="quarter";
        }
        else{
            m=words[60-minutes]+"minutes";
        }
        final_time=m+" to "+h;
    }
    return final_time;
}


int main(){
    int hours;
    int minutes;
    cin>>hours;
    cin>>minutes;
    string words[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen ", "twenty ", "twenty one ",
                 "twenty two ", "twenty three ", "twenty four ",
                 "twenty five ", "twenty six ", "twenty seven ",
                 "twenty eight ", "twenty nine ", "thirty " };
                 
                 
    string result=time_in_words(hours,minutes,words);       
    cout<<result<<endl;    
  
    return 0;
}
