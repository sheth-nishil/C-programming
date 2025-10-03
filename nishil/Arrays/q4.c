int main(){
    int n= 1400;
    int notes[9] = {500,200,100,50,20,10,5,2,1};
    int noteCount[9] = {0};

    int amount = n;

    for (int i =0; i<9; i++){
        if (amount >= notes[i]){
            noteCount[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    for (int i =0; i<9; i++){
            if (noteCount[i] > 0){
                printf("%d: %d\n", notes[i], noteCount[i]);
            }
    }
    return 0;
}
