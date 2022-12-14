#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>
#define QUESTION_NUMBER 12
void fill_Questions(char questions[][200]){

    strcpy(questions[0],"Cekimleri 46 hafta suren ve 'En uzun kesintisiz film cekimi' unvaniyla Guinness Dunya Rekorlarina giren film hangisidir?\nA- Kis Uykusu\nB- Ucuz Roman\nC- Gozleri Tamamen Kapali\nD- Agir Roman");
    strcpy(questions[1],"Hangisi 'G.O.R.A.' adli filmde geçen bir repliktir?\n"
                        "a- Zeki Müren de bizi görecek mi?\n"
                        "b- Vurucam kirbaci!\n"
                        "c- Araba nerde? Para nerde?\n"
                        "d- Dünyalilardan tiskiniyorum!---\n");
    strcpy(questions[2],"Cebelitarik Boğazi hangi ikisini birleştirir?\n"
                        "a- Akdeniz ve Atlas Okyanusu---\n"
                        "b- Atlas Okyanusu ve Büyük Okyanus\n"
                        "c- Hazar Denizi ve Aral Gölü\n"
                        "d- Sari Deniz ve Hint Okyanusu");
    strcpy(questions[3],"Shakespeare'in hangi oyunundaki baskarakter oyunun ilerleyen sahnelerinde Ingiltere krali olur?\n" 
                        "a- Macbeth\n"
                        "b- III. Richard---\n"
                        "c- Othello\n"
                        "d- Hamlet");
    strcpy(questions[4],"Al Pease, Formula 1 tarihinde, hangi sebepten dolayi yarismadan diskalifiye edilen ilk ve tek sporcudur?\n" 
                        "a- Emniyet kemeri takmamak\n" 
                        "b- Cok yavas gitmek---\n" 
                        "c- Ehliyetini evde unutmak\n"
                        "d- Aracta muzik dinlemek");
    strcpy(questions[5],"Hangi iki oyuncu, sinema filmlerinin hicbir sahnesinde, nikah masasinda 'gelin ve damat' olarak birlikte gorunmemistir?\n" 
                        "a- Gulsen Bubikoglu ve Tarik Akan---\n" 
                        "b- Adile Nasit ve Munir Ozkul\n" 
                        "c- Fatma Girik ve Cuneyt Arkin\n"
                        "d- Meral Zeren ve Kemal Sunal");
    strcpy(questions[6],"'Altin Aslan' kazanan bir yonetmen hangi film festivalinin jurisi tarafindan 'En Iyi Yonetmen' secilmistir?\n" 
                        "a- Venedik Uluslararasi Film Festivali\n"
                        "b- Berlin Uluslararasi Film Festivali\n" 
                        "c- Cannes Film Festivali\n"
                        "d- Antalya Altin Portakal Film Festivali Dogru Cevap: Venedik Uluslararasi Film Festivali");
    strcpy(questions[7],"Kenan Imirzalioglu hangi dizide Mehmet Kosovali adli karakteri canlandirmistir?\n"
                        "a- Karadayi\n" 
                        "b- Aci Hayat\n"
                        "c- Deli Yurek\n"
                        "d- Ezel Dogru Cevap: Aci Hayat");
    strcpy(questions[8],"'Roland-Garros sampiyonu' olan biri hangi sporu yapiyordur?\n"
                        "a- Tenis\n"    
                        "b- Golf\n" 
                        "c- Bilardo\n" 
                        "d- Boks Dogru Cevap: Tenis");
    strcpy(questions[9],"'Bana koltuk cikmani beklerdim' diyen biri muhatabina hangi mesaji vermis olur?\n"
                        "a- Beni desteklemeliydin\n" 
                        "b- Tasinmama yardim etmeliydin\n" 
                        "c- Balkonu odaya katmaliydin\n"
                        "d- Koltuk takimini yenilemeliydin Dogru Cevap: Beni desteklemeliydin");
    strcpy(questions[10],"Guinness Dunya Rekorlarina gore Sri Lanka'da bulunan ve insan eliyle dikilmis bilinen en eski agac olan 'Sri Maha Bodhiya' adli agac hangi tarihte dikilmistir?\n" 
                        "a- MO 1288\n "
                        "b- MO 288\n"
                        "c- MS 288\n"
                        "d- MS 1288 Dogru Cevap: MO 288");
    strcpy(questions[11],"Hangisi 1991'de Ingiltere milli futbol takiminda bes defa forma giymis bir futbolcunun soyadidir?\n" 
                        "a- Salako\n "
                        "b- Davaro\n"
                        "c- Feyzo\n "
                        "d- Maho Dogru Cevap: Salako");
    strcpy(questions[12],"'Gecti Bor'un pazari' atasozunde adi gecen Bor, hangi ilin bir ilcesidir?\n"
                        "a- Nigde\n"
                        "b- Nevsehir\n" 
                        "c- Kirsehir\n" 
                        "d- Aksaray Dogru Cevap: Nigde");
    strcpy(questions[13],"Basketbolda cembere yan durarak tek elle bas uzerinden gecirilerek atilan suta ne ad verilir?\n" 
                        "a- Cemsat\n" 
                        "b- Plonjon\n "
                        "c- Huksat\n "
                        "d- Degaj Dogru Cevap: Huksat\n");
    strcpy(questions[14],"333'un 3 kati, 333'un 3'te birinden kac fazladir?\n" 
                        "a- 0\n "
                        "b- 222\n "
                        "c- 555\n "
                        "d- 888 Dogru Cevap: 888");
    strcpy(questions[15],"'Buyuk Britanya'daki baskentleri gezdim' diyen biri hangi sehre gittigini soylemis olmaz?\n" 
                        "a- Londra\n"  
                        "b- Dublin\n " 
                        "c- Cardiff\n"  
                        "d- Edinburg Dogru Cevap: Dublin");
    strcpy(questions[16],"Gectigimiz gunlerde vefat eden, Sovyetler Birligi'nin son lideri kimdir?\n" 
                        "a-Kralice II. Elizabeth\n" 
                        "b- Mihail Gorbacov\n" 
                        "c- Kral Julien\n" 
                        "d- Pablo Neruda Dogru Cevap: Mihail Gorbacov");
    strcpy(questions[17],"'Dikkate sayan' ne demektir?\n" 
                        "a- Degerli\n" 
                        "b- Onemsiz\n "
                        "c- Basit\n" 
                        "d- Ozensiz Dogru Cevap: Degerli");
    strcpy(questions[18],"Hangi meyvenin 'gemre' ve 'pembegemre' adinda turleri vardir?\n" 
                        "a- Erik\n" 
                        "b- Karpuz\n" 
                        "c- Elma\n" 
                        "d- Uzum Dogru Cevap: Uzum");
    strcpy(questions[19],"6 ayda yaklasik 7164 kilometre yol gidip dunyanin en buyuk GPS cizimini yaparak Guinness Dunya Rekorlarina giren Yasusi Takahani'nin bu cizimle yazdigi cumlenin Turkce cevirisi hangisidir?\n" 
                        "a- Seni seviyorum\n"
                        "b- Merhaba Dunya\n" 
                        "c- Evlen benimle\n" 
                        "d- Bunu yazan Yasusi Dogru Cevap: Evlen benimle");
    strcpy(questions[20],"Hangisi bir cesit aci bala verilen addir?\n" 
                        "a- Deli bal\n" 
                        "b- Mecnun bal\n "
                        "c- Asik bal\n "
                        "d- Divane bal Dogru Cevap: Deli bal");
}

void fill_right_Answers(char answers[]){
    answers[0]='C';
    answers[1]='D';
    answers[2]='A';
    answers[3]='B';
    answers[4]='B';
    answers[5]='A';
    answers[6]='A';
    answers[7]='B';
    answers[8]='A';
    answers[9]='A';
    answers[10]='B';
    answers[11]='A';
    answers[12]='A';
    answers[13]='C';
    answers[14]='D';
    answers[15]='B';
    answers[16]='B';
    answers[17]='A';
    answers[18]='D';
    answers[19]='C';
    answers[20]='A';
}

bool searchIndex(int array[],int num){
    int a=-1;
    for(int i=0;i<QUESTION_NUMBER;i++){
        if(array[i]==num){
            a=1;
            break;
        }
    }
    if(a==1)
        return true;
    else
        return false;
}

void time_Counter(){

    for(int i=30;i>0;i--){
        printf("Kalan Sure: %02d\r",i);
        Sleep(1000);
    }
    printf("\n");
}



void apply_Contest(char questions[30][200],char right_Answers[30],int question_Values[13]){

    int questionIndex[12],index,question_counter=1,baraj=0;
    char userAnswer;

    for(int i=0;i<12;i++)
        questionIndex[i]=-1;

    srand(time(NULL));
    for(int i=0;i<12;i++){
        while(1){//sonsuz dongu
            index=rand()%15;
            if(searchIndex(questionIndex,index)==false){
                questionIndex[i]=index;
                printf("Soru %d\n",question_counter);
                if(question_counter<7){
                    puts(questions[index]);
                    printf("Sure 30 saniye\n");
                    printf("Joker kullanmak icin J'ye , Yarismadan ayrilmak icin E' ye basiniz:\n");
                    printf("Cevabi Giriniz: \n");
                    scanf(" %c",&userAnswer);
                    //time_Counter();
                }
                else{
                    puts(questions[index]);
                    printf("Joker kullanmak icin J'ye , Yarismadan ayrilmak icin E' ye basiniz:\n");
                    printf("Cevabi Giriniz: \n");
                    scanf(" %c",&userAnswer);
                }
                break;
            }
        }

        if(userAnswer=='J'){
            printf("Jokerler\n");
        }

        else if(userAnswer=='E'){
            char c;
            printf("Cikmak istediginizden emin misiniz? Evet-Hayir (E/H)\n");
            scanf(" %c",&c);
            printf("\n");
            switch(c){
            case 'E':
                printf("Yarismadan  ayrildiniz... Kazanciniz: %d tl\n",question_Values[question_counter-1]);
                exit(0);
                break;
            case 'H':
                printf("Soru %d\n",question_counter);
                if(question_counter<7){
                    puts(questions[index]);
                    printf("Sure 30 saniye\n");
                    printf("Joker kullanmak icin J'ye , Yarismadan ayrilmak icin E' ye basiniz:\n");
                    printf("Cevabi Giriniz: \n");
                    scanf(" %c",&userAnswer);
                    printf("\n");
                    //time_Counter();
                }
                else{
                    puts(questions[index]);
                    printf("Joker kullanmak icin J'ye , Yarismadan ayrilmak icin E' ye basiniz:\n");
                    printf("Cevabi Giriniz: \n");
                    scanf(" %c",&userAnswer);
                    printf("\n");
                }
                break;
            default:
                break;
            }
        }

        if(userAnswer==right_Answers[index]){//Cevap dogruysa
            switch(question_counter){
            case 2:
            case 7:
                printf("Tebrikler Cevabiniz Dogru %d tl kazandiniz\n",question_Values[question_counter]);
                printf("%d tl Degerindeki %d. Baraji Gectiniz\n\n",question_Values[question_counter],++baraj);
                break;
            case 12:
                printf("TEBRIKLER!!! %d tl Degerindeki Buyuk Odulu Kazandiniz\n\n",question_Values[question_counter]);
                break;
            default:
                printf("Tebrikler Cevabiniz Dogru %d tl kazandiniz\n\n",question_Values[question_counter]);
                break;
            }
        }

        else{//Cevap yanlissa
            printf("Cevabiniz Yanlis!!! BARAJ %d,Dogru Cevap: %c\n",baraj,right_Answers[index]);
            (baraj==1)? printf("%d tl kazandiniz\n",question_Values[2]):(baraj==2)? printf("%d tl kazandiniz\n",question_Values[7]):printf("Maalesef odul kazanamadiniz\n");
            exit(0);
        }
    question_counter++;
    }

}
int main()
{
    char questions[30][200];
    char right_Answers[30];
    int question_Values[13]={0,1000,2000,3000,5000,7500,10000,30000,50000,100000,200000,400000,1000000};
    char userAnswer;
    fill_Questions(questions);
    fill_right_Answers(right_Answers);
    apply_Contest(questions,right_Answers,question_Values);

    return 0;
}

