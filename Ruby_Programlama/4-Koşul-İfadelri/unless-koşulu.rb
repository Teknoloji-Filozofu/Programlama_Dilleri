print "Lütfen yaşınız giriniz:"

#to.i verilen değeri sayısal integer e çevir demek
yas = gets.to.i 

unless yas >= 18
    puts "Henüz reşit değilsiniz"
else
    puts "Reşitsiniz"
end