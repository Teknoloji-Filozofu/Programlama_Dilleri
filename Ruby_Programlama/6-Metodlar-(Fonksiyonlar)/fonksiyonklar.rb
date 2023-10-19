
def çizgi_çiz
    puts "-" * 20
end

çizgi_çiz

######################################################

def çizgi_çiz uzunluk
    puts "-" * uzunluk
end

çizgi_çiz 10

######################################################

def çizgi_çiz(uzunluk)
    puts "-" * uzunluk
end
çizgi_çiz(50)

######################################################

def çizgi_çiz sayi = 20
    puts "-" * sayi
end

#parametre tanımlamayınca varsayılandan devam eder 
çizgi_çiz

#######################################################

def çizgi_çiz (sayi = 20)
    puts "-" * sayi
end

#parametre tanımlamayınca varsayılandan devam eder 
çizgi_çiz

########################################################

def merhaba (isim = "oktay")
    puts "merhaba #{isim}"
end

merhaba
merhaba("sadık")

########################################################

def sona_ekle dizi 
    dizi << 6
end

def başa_ekle dizi
    dizi.unshift(6)
end

a = [1,2,3]
sona_ekle a
puts a

başa_ekle a
puts a
########################################################

def merhaba
    a = "merhaba"
    b = "dünya"
end

#şekilde yapılınca okuduğu en son değeri döndürür
puts merhaba

########################################################

def merhaba
    a = "merhaba"
    b = "dünya"
    return "merhaba ruby "
end

#şekilde yapılınca return değeri döndürür
puts merhaba

#######################################################

def ogrenci adı: "sadık",yas: 1
    return "öğrenci adı #{adı} ve yaşı #{yas}"
end

puts ogrenci
puts ogrenci adı:"oktay", yas:20

######################################################

def meyveler (*meyve)
    return "sevdiğim meyveler #{meyve}"
end

puts meyveler("armut","muz","şeftali")

####################################################

def meyveler (*meyve)
    return "sevdiğim meyveler #{meyve.join("-")}"
end

puts meyveler("armut","muz","şeftali")

####################################################