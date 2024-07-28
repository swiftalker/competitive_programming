import java.util.Scanner;

public class A {

    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        int banyakGelas = scan.nextInt();
        int[] nilai = new int[banyakGelas];
        int jumlah = 0;
        double rata = 0;
        for (int i = 0; i< banyakGelas; i++) {
            nilai[i] = scan.nextInt();
            jumlah = jumlah + nilai[i];
        }
        rata = jumlah / banyakGelas;

        if(cekIsi(nilai, rata)) {
            System.out.println("SESUAI");
        } else {
            int idxMin = min(nilai);
            int idxMax = max(nilai);
            double rataGelas = (nilai[idxMax] + nilai[idxMin])/2;
            if(rataGelas == rata) {
                int selisih = (nilai[idxMax] - nilai[idxMin]) / 2;
                nilai[idxMax] = nilai[idxMax] - selisih;
                nilai[idxMin] = nilai[idxMin] + selisih;

                if(cekIsi(nilai, rata)) {
                    System.out.println(selisih + " " + (idxMax + 1) + " " + (idxMin + 1));
                } else {
                    System.out.println("TIDAK SESUAI");
                }
            }
            else {
                System.out.println("TIDAK SESUAI");
            }
        }


    }

    public static int  min(int[] data) {
        int min = 10000;
        int n = data.length;
        int idexMin = -1;
        for(int i = 0; i<n; i++){
            if(data[i] < min) {
                min = data[i];
                idexMin = i;
            }
        }
        return idexMin;
    }

    public static int  max(int[] data) {
        int max = -1;
        int n = data.length;
        int idexMax = -1;
        for(int i = 0; i<n; i++){
            if(data[i] > max) {
                max = data[i];
                idexMax = i;
            }
        }
        return idexMax;
    }

    public static boolean cekIsi (int[] gelas, double rata) {
        boolean valid = true;
        for (int i = 0; i < gelas.length; i++) {
            if(gelas[i] != rata) {
                valid = false;
            }
        }
        return valid;
    }
}