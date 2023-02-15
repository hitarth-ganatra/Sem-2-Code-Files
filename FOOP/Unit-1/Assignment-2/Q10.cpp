// WAP to read time in hh:mm:ss and display answer only in seconds
// For e.g :- 2:15:30 then it should display 8130 seconds

#include<iostream>
using namespace std;

class secondsConverter{
    private:
        string time;
        int total_seconds;
    public:
        int hours, minutes, seconds;
        int setData(int hh, int mm, int ss);
        int convertData();
        int displayData();
};
int secondsConverter::setData(int hh, int mm, int ss){
    hours = hh;
    minutes = mm;
    seconds = ss;
}
int secondsConverter::convertData(){
    hours = hours * 60 * 60;
    minutes = minutes * 60;
    total_seconds = hours + minutes + seconds; 
}
int secondsConverter::displayData(){
    convertData();
    cout << (hours/60)/60 << ":" << (minutes/60)/60 << ":" << seconds << endl;
    cout << "Total seconds : " << total_seconds << endl << endl;
}

int main(){
    secondsConverter sample1, sample2;

    sample1.setData(2, 15, 30);
    sample1.displayData();

    sample2.setData(2, 15, 31);
    sample2.displayData();
    return 0;
}