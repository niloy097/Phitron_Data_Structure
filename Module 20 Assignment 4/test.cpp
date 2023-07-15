/*

one question, Dhoro amra class e boshe asi..
ekhn lunch break, ami tumak ask koris khawar jonno kisu anbo kina..
tumi bolso yes, bread anio. Ami haata shuru korle tumi abar daak diso.
.and bolso "Jodi kola thake 4 ta anio" , Ekhn tumar
question holo, tahsin ashar shomoi ki niye ashse? (THINK DEEPLY)

*/


#include<bits/stdc++.h>
#define Ho_Niya_Aho true
#define Na_Drkr_Nai false
#define Ek_Hali 4
#define kamSesh return 0
#define classRoom main
using namespace std;
class Food
{
    public:
        int bread;
        int kola;
    Food(int b, int k)
    {
        this->bread = b;
        this->kola = k;
    }

};
int classRoom()
{
    Food gastric(1, 4);
    int myHungryLVL;
    bool ChayerDokanAcheNi;
    bool kolAcheNi;
    bool tekaAseNi;
    cin >> myHungryLVL  >> ChayerDokanAcheNi >> kolAcheNi >> tekaAseNi;
    cout << "Khawar Jonne Kichu Abo?";
    if(myHungryLVL >= 60) cout << Ho_Niya_Aho << endl;
    else cout << Na_Drkr_Nai << endl;

    kamSesh;

    if(Ho_Niya_Aho && tekaAseNi == true)
    {
        cout << "-Ki Anbo?" << endl;
        cout << "-Bread" << endl;
        cout << "-Oi Suno 4 Ta Kola jodi paw niya aisho" << endl;
        if(tekaAseNi == true && ChayerDokanAcheNi == true && kolAcheNi == true)
        {
            cout << "Ei nao tomar" << gastric.bread << "ta bread ar"
            << Ek_Hali << "Ta Kola" << endl;
        }
        else
        {
            cout << "Kola Painai!";
            cout << "Ei naw" << gastric.bread << "Ta Bread";

        }
    }
    
    kamSesh;
}