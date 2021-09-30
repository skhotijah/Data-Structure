#include <iostream>
using namespace std;
struct product{
string name_product;
string category;
string unit;
float price;
string name_company;
};
int main() {
product pd[100];
int num_data,i;
cout<<"The Number of Data : ";
cin>>num_data;
cin.ignore(1000, '\n');
for (i=0;i<num_data;i++){
cout<<"Product  "<<(i+1)<<endl;
cout<<"Name Product : ";
getline(cin,pd[i].name_product,'\n');
cout<<"Category product : ";
getline(cin,pd[i].category,'\n');
cout<<"Unit : ";
getline(cin,pd[i].unit,'\n');
cout<<"Price : ";
cin>>pd[i].price;
cin.ignore(1000, '\n');
cout<<"Company : ";
getline(cin,pd[i].name_company,'\n');
}
for (i=0;i<num_data;i++){
cout<<pd[i].name_product<<"\t"<<pd[i].category<<"\t"<<pd[i].unit<<"\t";
cout<<pd[i].price<<"\t"<<pd[i].name_company<<endl;
}
return 0;
}
