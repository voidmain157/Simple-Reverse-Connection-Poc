# Simple-Reverse-Connection-Poc
A simple, Defanged client-server network communication simulation using C and Python for educational and cybersecurity research purporses only.
# Simple Reverse Connection Simulation (PoC)

Proyek ini adalah bentuk pembuktian konsep (Proof of Concept - PoC) sederhana mengenai bagaimana arsitektur jaringan Client-Server bekerja dalam simulasi komunikasi antara agen latar belakang (C) dan aplikasi pengendali (Python). 

> *⚠️ DISCLAIMER:* Proyek ini dibuat murni untuk tujuan edukasi, riset keamanan siber, dan pembelajaran mandiri di lingkungan laboratorium virtual (Virtual Machine). Kode ini tidak mengandung instruksi berbahaya, tidak merusak sistem, tidak menginfeksi berkas lain, dan tidak melanggar privasi data. Penulis tidak bertanggung jawab atas penyalahgunaan kode ini di luar lingkungan lab edukasi.

## Arsitektur Proyek
1. *server_listener.py*: Berperan sebagai sisi pengendali (Server) yang bertugas menunggu koneksi dan mengirimkan instruksi teks.
2. *client_agent.c*: Berperan sebagai agen simulasi (Client) yang berjalan di latar belakang Windows dan merespon instruksi teks dari server.

## Cara Deteksi dan Mitigasi (Sisi Pertahanan)
Untuk mendeteksi atau menangkal program dengan pola komunikasi seperti ini pada sistem jaringan Anda, langkah-langkah berikut dapat diterapkan:
1. *Monitoring Port*: Lakukan pemantauan aktivitas jaringan pada port yang tidak biasa (seperti port 9999 pada contoh ini) menggunakan perintah netstat -ano.
2. *Firewall Rules: Pastikan aturan Firewall memblokir koneksi keluar (*outbound traffic) yang tidak dikenal dari aplikasi yang tidak terverifikasi.
3. *Behavioral Analysis: Gunakan antivirus modern atau EDR (Endpoint Detection and Response) yang dapat mendeteksi aktivitas *stealth (seperti fungsi SW_HIDE pada Windows API).

## Lisensi
Proyek ini dilisensikan di bawah MIT License
