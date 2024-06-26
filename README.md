# Analisis-Deret-Fibonacci
Dalam dunia pemrograman dan algoritma, cara menghitung bilangan Fibonacci sering kali dijadikan studi kasus untuk memahami perbedaan antara berbagai teknik pemrograman, terutama rekursif dan dynamic programming. Bilangan Fibonacci adalah serangkaian angka yang dihasilkan dari penjumlahan dua angka sebelumnya, dimulai dari 0 dan 1. Implementasi Fibonacci dengan metode rekursif sangat sederhana, tetapi tidak efisien untuk nilai 𝑛 yang besar karena menghasilkan banyak pemanggilan fungsi yang berulang. Sebaliknya, pendekatan dynamic programming menawarkan solusi yang jauh lebih efisien dengan menghindari perhitungan yang berulang.

Penelitian ini menganalisis dua algoritma berikut:
1. Fibonacci Rekursif
Pendekatan rekursif menggunakan sifat dasar dari definisi rekursif bilangan Fibonacci. Algoritma ini memanggil dirinya sendiri untuk menghitung dua bilangan Fibonacci sebelumnya. Kompleksitas waktunya eksponensial, yaitu 𝑂(2𝑛).

3. Fibonacci Dynamic Programming
Pendekatan ini menggunakan array atau vektor untuk menyimpan hasil perhitungan dari setiap bilangan Fibonacci hingga 𝑛. Dengan cara ini, setiap bilangan hanya dihitung sekali. Kompleksitas Waktu: Linear, yaitu O(n).

Dengan membandingkan waktu eksekusi kedua pendekatan ini untuk beberapa nilai 𝑛, penelitian ini bertujuan untuk memberikan rekomendasi mengenai pendekatan mana yang lebih cocok digunakan dalam berbagai skenario.


