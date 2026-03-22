#include <stdio.h>
#include <string.h>

float tarifDasar = 5000.0;

typedef struct {
    int jam;
    char jenisKendaraan[10];
} hasil;

float hitungBiayaParkir(char kendaraan[], int jam) {
    float biayaParkir = 0;
    float total;
    if(strcmp(kendaraan, "motor") == 0 || strcmp(kendaraan, "Motor") == 0) {
        biayaParkir = (0.5 * tarifDasar);
    } else if(strcmp(kendaraan, "mobil") == 0 || strcmp(kendaraan, "Mobil") == 0) {
        biayaParkir = tarifDasar;
    } else if(strcmp(kendaraan, "truk") == 0 || strcmp(kendaraan, "Truk") == 0) {
        biayaParkir = (2 * tarifDasar);
    } else {printf("Jenis kendaraan tidak valid.");
        return 0;}
    total = biayaParkir * jam;
    if(jam > 5) {
        total = total - (0.1 * total);
    }
    return total;
}

float hitungTotalParkir(float biaya[], int jumlah) {
    float total = 0;
    for(int i = 0; i < jumlah; i++) {
        total += biaya[i];
    }
    return total;
}

int main() {
    hasil data[3];
    float biaya[3];
    int jumlahKendaraan;
    char nama[50];

    printf("---- Program tarif parkir ----\n");
    printf("Masukkan nama pelanggan: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0; 

    printf("Masukkan jumlah kendaraan yang diparkir: ");
    scanf("%d", &jumlahKendaraan);

    if(jumlahKendaraan > 3) {
        printf("Maksimal kendaraan 3.\n");
        return 0;
    }
    for(int i = 0; i < jumlahKendaraan; i++) {
    printf("\nKendaraan ke-%d\n", i+1);
    printf("Masukkan jenis kendaraan (motor/mobil/truk): ");
    scanf("%s", data[i].jenisKendaraan);
    printf("Masukkan lama parkir (jam): ");
    scanf("%d", &data[i].jam);
    biaya[i] = hitungBiayaParkir(data[i].jenisKendaraan, data[i].jam);
    printf("Biaya parkir kendaraan ini: Rp %.0f\n", biaya[i]);
    }

    float total = hitungTotalParkir(biaya, jumlahKendaraan);

    FILE *file = fopen("struk.txt", "w");

    if(file == NULL) {
        printf("Gagal membuat file!\n");
        return 0;
    }

    fprintf(file, "-------- Struk Parkir --------\n");
    fprintf(file, "Nama Pelanggan: %s\n\n", nama);

    for(int i = 0; i < jumlahKendaraan; i++) {
        fprintf(file, "Kendaraan ke-%d\n", i+1);
        fprintf(file, "Jenis  : %s\n", data[i].jenisKendaraan);
        fprintf(file, "Jam    : %d\n", data[i].jam);
        fprintf(file, "Biaya  : Rp %.0f\n\n", biaya[i]);
    }

    fprintf(file, "------------------------\n");
    fprintf(file, "TOTAL BAYAR : Rp %.0f\n", total);
    fprintf(file, "------------------------------\n");

    fclose(file);

    printf("\nStruk berhasil disimpan.");
return 0;
}