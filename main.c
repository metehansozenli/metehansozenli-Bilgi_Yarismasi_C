#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>
#define QUESTION_NUMBER 12

void fill_Questions(char questions[][300]){
    strcpy(questions[0],"Cekimleri 46 hafta suren ve 'En uzun kesintisiz film cekimi' unvaniyla Guinness Dunya Rekorlarina giren film hangisidir?\nA- Kis Uykusu\nB- Ucuz Roman\nC- Gozleri Tamamen Kapali\nD- Agir Roman\n");
    strcpy(questions[1],"Hangisi 'G.O.R.A.' adli filmde gecen bir repliktir?\nA- Zeki Muren de bizi gorecek mi?\nB- Vurucam kirbaci!\nC- Araba nerde? Para nerde?\nD- Dunyalilardan tiskiniyorum!\n");
    strcpy(questions[2],"Cebelitarik Boğazi hangi ikisini birleştirir?\na- Akdeniz ve Atlas Okyanusu\nb- Atlas Okyanusu ve Büyük Okyanus\nc- Hazar Denizi ve Aral Gölü\nd- Sari Deniz ve Hint Okyanusu\n");
    strcpy(questions[3],"Shakespeare'in hangi oyunundaki baskarakter oyunun ilerleyen sahnelerinde Ingiltere krali olur?\na- Macbeth\nb- III. Richard---\nc- Othello\nd- Hamlet\n");
    strcpy(questions[4],"Al Pease, Formula 1 tarihinde, hangi sebepten dolayi yarismadan diskalifiye edilen ilk ve tek sporcudur?\na- Emniyet kemeri takmamak\nb- Cok yavas gitmek\nc- Ehliyetini evde unutmak\nd- Aracta muzik dinlemek\n");
    strcpy(questions[5],"Hangi iki oyuncu, sinema filmlerinin hicbir sahnesinde, nikah masasinda 'gelin ve damat' olarak birlikte gorunmemistir?\na- Gulsen Bubikoglu ve Tarik Akan\nb- Adile Nasit ve Munir Ozkul\nc- Fatma Girik ve Cuneyt Arkin\nd- Meral Zeren ve Kemal Sunal\n");
    strcpy(questions[6],"'Altin Aslan' kazanan bir yonetmen hangi film festivalinin jurisi tarafindan 'En Iyi Yonetmen' secilmistir?\na- Venedik Uluslararasi Film Festivali\nb- Berlin Uluslararasi Film Festivali\nc- Cannes Film Festivali\nd- Antalya Altin Portakal Film Festivali\n");
    strcpy(questions[7],"Kenan Imirzalioglu hangi dizide Mehmet Kosovali adli karakteri canlandirmistir?\na- Karadayi\nb- Aci Hayat\nc- Deli Yurek\nd- Ezel\n");
    strcpy(questions[8],"'Roland-Garros sampiyonu' olan biri hangi sporu yapiyordur?\na- Tenis\nb- Golf\nc- Bilardo\nd- Boks\n");
    strcpy(questions[9],"'Bana koltuk cikmani beklerdim' diyen biri muhatabina hangi mesaji vermis olur?\na- Beni desteklemeliydin\nb- Tasinmama yardim etmeliydin\nc- Balkonu odaya katmaliydin\nd- Koltuk takimini yenilemeliydin\n");
    strcpy(questions[10],"Guinness Dunya Rekorlarina gore Sri Lanka'da bulunan ve insan eliyle dikilmis bilinen en eski agac olan 'Sri Maha Bodhiya' adli agac hangi tarihte dikilmistir?\na- MO 1288\nb- MO 288\nc- MS 288\nd- MS 1288\n");
    strcpy(questions[11],"Hangisi 1991'de Ingiltere milli futbol takiminda bes defa forma giymis bir futbolcunun soyadidir?\na- Salako\nb- Davaro\nc- Feyzo\nd- Maho\n");
    strcpy(questions[12],"'Gecti Bor'un pazari' atasozunde adi gecen Bor, hangi ilin bir ilcesidir?\na- Nigde\nb- Nevsehir\nc- Kirsehir\nd- Aksaray\n");
    strcpy(questions[13],"Basketbolda cembere yan durarak tek elle bas uzerinden gecirilerek atilan suta ne ad verilir?\na- Cemsat\nb- Plonjon\nc- Huksat\nd- Degaj\n");
    strcpy(questions[14],"333'un 3 kati, 333'un 3'te birinden kac fazladir?\na- 0\nb- 222\nc- 555\nd- 888\n");
    strcpy(questions[15],"'Buyuk Britanya'daki baskentleri gezdim' diyen biri hangi sehre gittigini soylemis olmaz?\na- Londra\nb- Dublin\nc- Cardiff\nd- Edinburg\n");
    strcpy(questions[16],"Gectigimiz gunlerde vefat eden, Sovyetler Birligi'nin son lideri kimdir?\na-Kralice II. Elizabeth\nb- Mihail Gorbacov\nc- Kral Julien\nd- Pablo Neruda\n");
    strcpy(questions[17],"'Dikkate sayan' ne demektir?\na- Degerli\nb- Onemsiz\nc- Basit\nd- Ozensiz\n");
    strcpy(questions[18],"Hangi meyvenin 'gemre' ve 'pembegemre' adinda turleri vardir?\na- Erik\nb- Karpuz\nc- Elma\nd- Uzum\n");
    strcpy(questions[19],"6 ayda yaklasik 7164 kilometre yol gidip dunyanin en buyuk GPS cizimini yaparak Guinness Dunya Rekorlarina giren Yasusi Takahani'nin bu cizimle yazdigi cumlenin Turkce cevirisi hangisidir?\na- Seni seviyorum\nb- Merhaba Dunya\nc- Evlen benimle\nd- Bunu yazan Yasusi\n");
    strcpy(questions[20],"Hangisi bir cesit aci bala verilen addir?\na- Deli bal\nb- Mecnun bal\nc- Asik bal\nd- Divane ba\nl");
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



void apply_Contest(char questions[30][300],char right_Answers[30],int question_Values[13]){

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

        if(toupper(userAnswer)=='J'){
            printf("Jokerler\n");
        }

        else if(toupper(userAnswer)=='E'){
            char c;
            printf("Cikmak istediginizden emin misiniz? Evet-Hayir (E/H)\n");
            scanf(" %c",&c);
            printf("\n");
            switch(c){
            case 'e':
            case 'E':
                printf("Yarismadan  ayrildiniz... Kazanciniz: %d tl\n",question_Values[question_counter-1]);
                exit(0);
                break;
            case 'h':
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

        if(toupper(userAnswer)==right_Answers[index]){//Cevap dogruysa
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
            printf("Cevabiniz Yanlis!!! Dogru Cevap: %c\n",right_Answers[index]);
            (baraj==1)? printf("%d tl kazandiniz\n",question_Values[2]):(baraj==2)? printf("%d tl kazandiniz\n",question_Values[7]):printf("Maalesef odul kazanamadiniz\n");
            exit(0);
        }
    question_counter++;
    }
}
int main()
{
    char questions[30][300],right_Answers[30],userAnswer;
    int question_Values[13]={0,1000,2000,3000,5000,7500,10000,30000,50000,100000,200000,400000,1000000};
    fill_Questions(questions);
    fill_right_Answers(right_Answers);
    apply_Contest(questions,right_Answers,question_Values);
    return 0;
}
