#include <stdio.h>
int bonus_awal = 10000;
int reset_counter = 5;

int tentukan_bonus(int t) {
    int total = 0;
    while(t > 0) {
        total += bonus_awal;
        reset_counter--;
        if(reset_counter == 0) {
            reset_counter += 5;
            bonus_awal += 5000;
        }
        t--;
    }
    return total;
}

int main() {
    int t;
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &t);

    int bonus = tentukan_bonus(t);
    printf("Jumlah bonus: %d", bonus);
}