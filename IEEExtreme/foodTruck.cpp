#include <bits/stdc++.h> 
#include <iostream>
#include <iomanip>
using namespace std; 
const double PI  =3.141592653589793238463;

long double degrees_to_radian(long double angle){
    return (angle*(PI/180));
}
long double distance(long double x,long double y,long double x1,long double y1){
    x = degrees_to_radian(x);
    y = degrees_to_radian(y);
    x1 = degrees_to_radian(x1);
    y1 = degrees_to_radian(y1);
    long double d = ((6378.137*2))*asin(sqrt(pow(sin((x-x1)/2.0),2)+cos(x)*cos(x1)*pow(sin((y-y1)/2.0),2)));
    //cout<<setprecision(10)<<x<<" "<<y<<" "<<x1<<" "<<y1<<endl;
    //cout<<setprecision(10)<<d<<endl;
    return d;
}

int findElement(vector<long double> vec,long double number){

    if (find (vec.begin(), vec.end(), number) != vec.end()) 
    { 
        return 1;
    } 
    else{
        return 0;
    }
}
int findElementplace(vector<long double> vec,long double number){
    return find (vec.begin(), vec.end(), number) - vec.begin() + 1;

}
int main(){
    vector<long double> inXY;
    vector<long double> output;
    vector<long double> time_date;
    string inputXY;
    getline(cin,inputXY);
    stringstream in(inputXY);
    long double i;
    while(in>>i){
        inXY.push_back(i);
        if(in.peek()==','){
            in.ignore();
        }
    }
    //cout<<"X Y :"<<inXY[0]<<" "<<inXY[1]<<endl;
    float radius;
    cin>>radius;
    //cout<<"Radis : "<<radius<<endl;
    string names;
    getline(cin,names);
    cin.ignore(1000,'\n');
    string data;
    vector<long double> dataStore;
    while(true){
        getline(cin,data);
        if(data.length()==0){
            break;
        }
        stringstream in(data);
        long double i;
        while(in>>i){
            dataStore.push_back(i);
            if(in.peek()==',' ||in.peek()=='/'||in.peek()==':'||in.peek()==' '){
                in.ignore();
            }
        }
        long double d = distance(inXY[0],inXY[1],dataStore[5],dataStore[6]);
        int time= dataStore[0]*30*24*60+dataStore[1]*24*30+dataStore[2]+dataStore[3]*60+dataStore[4];
        if(findElement(output,dataStore[7])==1){
            if(time_date[findElementplace(output,dataStore[7])]<time){
                if(d>radius){                
                output.erase(output.begin() + findElementplace(output,dataStore[7])-1 );
                }
            }
        }
        else{
            if(d<radius){
                output.push_back(dataStore[7]);
                time_date.push_back(time);
            }
        }
        dataStore.clear();
       /* vector<long double> vez {1,2,3,4,8};
        cout<<vez[2]<<endl;
        cout<<findElementplace(vez,3)<<endl;
        vez.erase(vez.begin()+findElementplace(vez,3));
        for(long double x: vez){
	        cout<<x;
        }*/
        //cout<<"data : "<<dataStore[5]<<" "<<dataStore[6]<<endl;

    }
    sort(output.begin(),output.end());
    cout<<setprecision(10)<<output[0];
   for (auto i = output.begin()+1; i != output.end(); ++i) {
        //cout << *i << " ";
	    cout<<setprecision(10)<<","<<*i;
        }
}