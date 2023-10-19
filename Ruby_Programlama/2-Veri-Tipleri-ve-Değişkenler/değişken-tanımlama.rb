=begin

değişkenler tanımlanırken herhangi bir sembol, işaret
vb. şeyler kullanılmaz.
sayıyla başlayamaz ve türkçe harfler içeremez.
büyük küçük harf duyarlılığı vardır.
=end

# String değişkeni
a = "sadık oktay biçici"
A = "SADIK OKTAY BİÇİCİ"

isim_bir = "sadık"
isim_iki = "oktay"

isim_soyisim = "sadık oktay biçici"
isim_Soyisim = "SADIK OKTAY BİÇİCİ"

#integer değişkeni
yas = 20 

#float değişkeni
vergi = 0.036

#boolean değişkeni
karar = true 
karar_iki = false

puts    a,
        A,
        isim_bir,
        isim_iki,
        isim_soyisim,
        isim_Soyisim,
        yas,
        vergi,
        karar,
        karar_iki

isim,soyisim,mail,website = "oktay", "biçici",
                            "oktay@gmail.com",
                            "oktay.com"
puts isim,soyisim,mail,website