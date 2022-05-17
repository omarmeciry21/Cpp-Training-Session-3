#include <iostream>

using namespace std;

struct Product{
    string name;
    int id;
    double price;
};

struct Category{
    int id;
    string name;
    Product productList[3];
};
int main()
{
    Product p1 = Product{"Shoes",0,200};
    Product p2 = Product{"Handphone",1,50};
    Product p3 = Product{"Jacket",2,300};

    //cout<<"Name: "<<p1.name<<endl;
    //cout<<"ID: "<<p1.id<<endl;
    //cout<<"Price: "<<p1.price<<endl;

    Category c1 = Category{0,"General",{p1,p2,p3}};

    cout<<"Category name:"<<c1.name<<endl;
    cout<<"Category ID:"<<c1.id<<endl;
    cout<<"Products:"<<endl;

    for(int i=0; i <3;i++){
        cout<<"Product Name: "<<c1.productList[i].name<<endl;
        cout<<"Product ID: "<<c1.productList[i].id<<endl;
        cout<<"Product Price: "<<c1.productList[i].price<<endl;
    }

    return 0;
}
