import os
import sqlite3 
veritabani = 'kitaplik.sqlite'
dosya_mevcut = os.path.exists(veritabani)

vt = sqlite3.connect(veritabani)
imlec = vt.cursor()


imlec.execute("UPDATE kitap_bilgisi SET begeni = '****' WHERE begeni='***'")
imlec.execute("UPDATE kitap_bilgisi SET okunma_durumu = 'evet' WHERE okunma_durumu = 'hayır'")
vt.commit()

vt = sqlite3.connect(veritabani)
imlec = vt.cursor()
imlec.execute("SELECT * FROM kitap_bilgisi")
kitaplar = imlec.fetchall()
print(kitaplar)
for i in kitaplar:
    for k in i:
        print(k,end=" ")
    print("")

vt.close()