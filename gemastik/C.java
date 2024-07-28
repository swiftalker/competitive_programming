import java.util.*;

public class C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Membaca jumlah bilangan
        int n = scanner.nextInt();
        // Membaca bilangan-bilangan dari input
        Set<Integer> numbers = new TreeSet<>();
        for (int i = 0; i < n; i++) {
            numbers.add(scanner.nextInt());
        }

        // Mengubah Set menjadi ArrayList untuk proses berikutnya
        List<Integer> sortedNumbers = new ArrayList<>(numbers);

        // Menghasilkan ringkasan
        StringBuilder result = new StringBuilder();
        int i = 0;
        while (i < sortedNumbers.size()) {
            int start = sortedNumbers.get(i);
            int end = start;

            // Mencari rentang berurutan
            while (i < sortedNumbers.size() - 1 && sortedNumbers.get(i + 1) == end + 1) {
                end = sortedNumbers.get(++i);
            }

            // Menambahkan rentang ke hasil
            if (start == end) {
                result.append(start);
            } else {
                result.append(start).append('-').append(end);
            }
            
            // Menambahkan koma sebagai pemisah, jika ada lebih banyak elemen
            if (i < sortedNumbers.size() - 1) {
                result.append(',');
            }

            i++;
        }

        // Menampilkan hasil
        System.out.println(result.toString());
    }
}