print "1-5 arası bir sayı giriniz"
sayı = gets.to.i

case sayı
when 1 
    puts "1 sayısını seçtiniz"
when 2
    puts "2 sayınsını seçtiniz"
when 3 
    puts "3 sayısını seçtiniz"
when 4
    puts "4 sayısını seçtiniz"
when 5 
    puts "5 sayısını seçtiniz"
else 
    puts "girdiğiniz değer tanımlı değil \n"
end

print "1-10 arası bir sayı giriniz"
sayıı = gets.to.i

case sayıı 
when 1,3,5,7,9
    puts "Seçtiğiniz değer tek sayıdır"
when 2,4,6,8,10
    puts "Seçtiğiniz sayı çift hanelidir"
else
    puts "girdiğiniz sayı tanımlı değil"
end

##################################################

a = 1

case a 
when String
    puts "a içerisindeki değer meindir"
when Integer
    puts "a içerisndeki değr sayıdır"
end

######################################################

a = "merhaba benim adım oktay"

case a 
when /benim/
    puts "a içerisinde benim kelimesi vardır"
else 
    puts "a içerisinde benim kelimesi yoktur"
end