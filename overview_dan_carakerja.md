## overview

![Screenshot (298)](https://user-images.githubusercontent.com/123804483/221389695-6dab5246-7b5a-40e4-9028-52d2faf936ad.png)

Program ini dimulai dengan diperlihatkan peta arena perang, beserta dengan posisi musuh dan player. Peta berukuran 11 x 11, menempatkan musuh secara random, dan menempatkan pemain di tengah – tengah arena.

![Screenshot (309)](https://user-images.githubusercontent.com/123804483/221390036-856544a3-bbcd-4fba-9c37-7661ac551b63.png)

![Screenshot (310)](https://user-images.githubusercontent.com/123804483/221390040-d45c2317-55b1-4492-b147-4cd96913499a.png)

![Screenshot (314)](https://user-images.githubusercontent.com/123804483/221390147-3f4efc46-4455-4ef4-a47f-02f1714d9f54.png)


Setelah itu pemain diminta mengetikkan keywords “w, a, s, d” untuk menggerakkan kapal (w untuk maju, s untuk mundur, a untuk ke kiri, dan d untuk ke kanan) dengna cara mengetik keywords lalu menakan enter, dan player diminta mengetikkan "shoot" untuk menembak, "enemy" untuk melihat health musuh dan posisi musuh, exit untuk keluar.

Setiap kali kita bergerak maka musuh akan langsung otomatis menyerang kita, darah kita akan otomatis berkurang setiap bergerak, jika dan hanya jika kita berada pada dalam area jangkauan serangan musuh.

![Screenshot (312)](https://user-images.githubusercontent.com/123804483/221390044-148d0969-0f5a-4cc4-acb7-084e7fe465b7.png)

Kita harus menyerang musuh sampai health musuh berkurang, setiap jumlah musuh yang mati akan disimpan,dan jika semua musuh mati maka akn lanjut ke wave berikutnya dan jika pemain mati maka akn ditampilakn total jumlah musuh yang sudah dikalahkan.

## cara kerja program

Program yang dituliskan adalah game yang mengharuskan player untuk memindahkan kapalnya (simbol 'P') ke seluruh area map dan menghindari musuh (simbol 'A') yang telah muncul di area tersebut. Saat player menekan 'w', kapal player akan maju ke arah atas map dan saat player menekan 's', kapal player akan mundur ke arah bawah map. Player juga dapat memindahkan kapal ke arah kiri dengan menekan tombol 'a' atau ke arah kanan dengan menekan tombol 'd'. Setiap kapal (player dan musuh) memiliki koordinat yang dapat dilihat dengan menjalankan fungsi printmatrix().
Terdapat beberapa class yang digunakan dalam program ini, diantaranya:

1. Class EnemyShip
Class EnemyShip merupakan class yang berfungsi untuk membuat musuh di dalam game. Pada class ini, terdapat 2 variabel anggota yaitu enemyId dan enemyCount yang digunakan untuk menghitung jumlah musuh yang telah di spawn. Class EnemyShip memiliki ctor default, dimana akan membuat musuh dengan health = 150, damage = 25, dan range = 2. Saat objek dari class EnemyShip dibuat, enemyCount akan bertambah 1, kemudian variabel enemyId dari objek tersebut akan diinisialisasi dengan nilai enemyCount.

2. Class World
Class World merupakan class yang digunakan untuk membuat objek dunia pada game ini. Pada ctor class World, dibuatlah objek dari class PlayerShip yang akan menjadi objek player. Kemudian, dibuatlah 7 objek dari class EnemyShip yang akan menjadi objek musuh pada game. Pada class World terdapat juga beberapa fungsi lain seperti getPlayer() dan printSide() yang digunakan untuk mengakses objek player dan objek musuh pada game.

3. Class Ship
Class Ship merupakan class dasar yang digunakan untuk membuat objek kapal, baik itu player maupun musuh. Pada class Ship, terdapat beberapa variabel anggota seperti x, y, health, range, dan damage. Class ini memiliki ctor default, dimana akan membuat objek kapal dengan health = 150, damage = 25, dan range = 2. Class ini juga memiliki ctor custom yang digunakan untuk membuat objek kapal dengan nilai health, damage, dan range yang diinginkan.
Setiap objek dari class Ship memiliki fungsi isAlive() yang mengembalikan nilai boolean yang menunjukkan apakah kapal tersebut masih hidup atau tidak. Fungsi isAlive() akan mengembalikan nilai false apabila health dari kapal tersebut sama dengan 0. Terdapat juga fungsi-fungsi lain seperti setHealth(), getX(), getY(), setCoor(), printShipCoor(), dan sameCoordinate() yang digunakan untuk mengakses variabel anggota dan fungsi pada class Ship.

Fungsi setHealth() digunakan untuk mengubah nilai variabel health dari suatu objek kapal. Fungsi getX() dan getY() digunakan untuk mengakses nilai variabel x dan y pada suatu objek kapal. Fungsi setCoor() digunakan untuk mengubah nilai variabel x dan y pada suatu objek kapal. Fungsi printShipCoor() digunakan untuk menampilkan koordinat suatu objek kapal ke layar. Fungsi sameCoordinate() digunakan untuk mengecek apakah suatu

4. Class PlayerShip merupakan suatu turunan dari class Ship yang merepresentasikan kapal yang dimainkan oleh pemain dalam sebuah game. Class ini memiliki beberapa atribut seperti health, damage, range, dan koordinat posisi kapal pada peta game. Selain itu, class ini juga memiliki constructor dengan nilai default, yaitu health sebesar 500, damage sebesar 5, range sebesar 5, dan posisi kapal pada koordinat (0, 0).
Dalam class ini terdapat method dan fungsi yang berkaitan dengan kapal pemain, di antaranya adalah:

PlayerShip(): Constructor dengan nilai default health=500, damage=5, range=5, dan posisi kapal pada koordinat (0,0).
isAlive(): Fungsi yang mengembalikan nilai boolean yang menyatakan apakah kapal pemain masih hidup atau tidak.
Seluruh method yang diwarisi dari class Ship, seperti getX(), getY(), setCoor(), printShipCoor(), dan sameCoordinate().
