# Break dan Continue

setelah memahami tentang konsep pengulangan. Konsep selanjutnya yang akan kita pelajari adalah konsep break dan continue.

break dan continue digunakan untuk mengontrol jalannya proses pengulangan. perintah break berfungsi untuk menghentikan pengulangan walaupun kondisi yang terdapat didalam pengulangan itu masih bernilai true, sedangkan continue berfungsi untuk melanjutkan pengulangan ke langkah berikutnya.

Secara gamblangnya saya mendefiniskan bahwa
    - break adalah perintah untuk keluar paksa dari perintah pengulangan.

    - continue adalah perintah untuk melewatkan perintah yang seharusnya di kerjakan.

untuk lebih jelasnya mari kita lihat potongan program ini.

for (int i =0; i<10; i++){
     std::cout<<i+1<<" ";
     if(i == 3) {
         break;
     }
 }

 * Potongan program diatas sebenarnya diperintahkan untuk menampilkan nilai i+1 sebanyak 10 kali.
  Tetapi ketika i == 3, Program dipaksa keluar dari perintah untuk menampilkan nilai i+1 sebanyak 10 kali. jadi program akan keluar setelah dia berhasil menampilkan 1 2 3 4.



untuk memahami proses kerja perintah continue, mari lihat baris progam dibawah ini.

  for (int i =0; i<10; i++){
     if(i %  2 == 1) {
         continue;
     }
     std::cout<<i<<" ";
 }  

 * potongan progam diatas hanya akan menampilkan angka genap dari 0-10 saja. hal itu dikarenakan adanya perintah 
 if(i %  2 == 1) {continue;} yang berati jika nilai i dibagi dengan 2 masih memiliki sisa 1 maka nilai tersebut tidak ditampilkan.
         
     

