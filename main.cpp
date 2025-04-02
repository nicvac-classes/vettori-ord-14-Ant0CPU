#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, j, t, max, min;
    string s;
    bool scambi;

    scambi=true;
    i=0;
    
    do {
        cout<<"Inserire il numero di studenti"<<endl;
        cin>>n;
    } while(n<=0);

    vector<string> nomi(n);
    vector<float> voti(n);

    for (i=0; i<n; i++) {
        
        cout<<"Inserisci nomi"<<endl;
        cin>>nomi[i];

        cout<<"Inserisci voti"<<endl;
        cin>>voti[i];
    }

    i=0;
    while (i<n-1 and scambi==true) {
        
        scambi=false;
        j=0;

        while (j<=(n-2)-i) {
            if (voti[j]>voti[j+1]) {

                t=voti[j];
                voti[j]=voti[j+1];
                voti[j+1]=t;

                s=nomi[j];
                nomi[j]=nomi[j+1];
                nomi[j]=s;

                scambi=true;
            }

            j=j+1;
        }

        i=i+1;
    }

    cout<<"Nomi:";
    for (i=0; i<n; i++) {
        cout<<nomi[i]<<"; ";
    }

    cout<<"Voti: ";
    for (i=0; i<n; i++) {
        cout<<voti[i]<<"; ";
    }
    
    max=voti[n-1];
    min=voti[0];

    cout<<"Voto massimo: "<<max<<endl;
    cout<<"Voto min: "<<min<<endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
