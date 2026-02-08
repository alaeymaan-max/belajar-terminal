🖥️ CLF Git OS: The Holy Grail Project
Memahami Teknologi dari Sebutir Pasir sehingga ke Awan

📜 1. Falsafah Projek (The Vision)
CLF Git OS bukan sekadar baris kod; ia adalah pengembaraan intelektual untuk merapatkan jurang antara peranti digital (benda mati) dan logik manusia (benda hidup). Berdasarkan falsafah "The Ghost in the Machine", projek ini dibina untuk membuktikan bahawa sebuah sistem operasi asas boleh dihidupkan pada sebarang perkakasan—daripada PC ke telefon pintar Android melalui Termux.

🛠️ 2. Senibina Sistem (System Architecture)
Sistem ini dibina menggunakan bahasa C secara natif dan dikompail menggunakan Clang pada senibina ARM (telefon pintar).
Komponen Utama:
Kernel Simulation: Antaramuka baris perintah (CLI) yang mengendalikan arahan sistem.
Makefile Automation: Menggunakan make untuk menguruskan proses pengompailan dan automasi binary.
Real-Time Clock (RTC) Integration: Mengambil data masa nyata dari perkakasan untuk fungsi jam AM/PM.

⌨️ 3. Arahan Tersedia (Available Commands)
Dalam sesi pembangunan terkini, arahan berikut telah diimplementasikan:
Arahan
Fungsi Edukatif
help
Memaparkan senarai logik sistem yang tersedia.
fetch
Memaparkan logo ASCII sistem dan spesifikasi "hardware" simulasi.
time
Menunjukkan integrasi jam sistem dengan format AM/PM yang tepat.
pasir
Penerangan Filosofi: Mengingatkan kita bahawa semua teknologi 2nm bermula dari silika (pasir).
about
Misi projek untuk menghapuskan jurang pengetahuan teknologi.
exit
Menutup "Kernel" dan kembali ke shell Linux/Termux.

🧬 4. Diari Pembangunan (Educational Log)
Projek ini mencatatkan beberapa kejayaan teknikal yang kritikal dalam pengembaraan arkitek:
Cross-Platform Porting: Berjaya memindahkan kod dari PC ke persekitaran Android menggunakan Git.
Debugging Makefile: Mengatasi isu tabulation dan struktur target dalam pengurusan pengompailan.
Security Identity: Menggunakan Personal Access Token (PAT) GitHub untuk memastikan integriti kod semasa penghantaran (push) ke awan.

🚀 5. Cara Menjalankan Sistem
Pastikan anda mempunyai Clang dan Make terpasang dalam Termux anda:
Bash
git clone https://github.com/alaeymaan-max/belajar-terminal.git
cd belajar-terminal
make run


🏛️ 6. Encyclopedia
Projek ini juga mengandungi folder /encyclopedia yang menyimpan teori-teori mendalam tentang pengaturcaraan sistem, logik pagar, dan sejarah silikon.

"Architected by Aiman Rafee (alaeymaan-max) - Membina jambatan antara kod dan kehidupan."
