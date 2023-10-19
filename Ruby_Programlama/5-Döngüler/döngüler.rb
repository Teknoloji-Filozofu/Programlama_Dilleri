# Dawnto Döngüsü

10.downto 1 do |sayı|
    p sayı
end

##########################################

# Tımes döngüsü

# verilen miktarda işkemki tekrar eder
5.times{
    puts "sadık oktay biçici"
}

#############################################

# Upto Döngüsü

1.upto 5 do |sayi|
    p sayi
end

#############################################

# step döngüsü

1.step 10 do |a|
    print "#{a} - "
end

10.step 1, -2 do |b|
    print "#{b} - "
end

print "Başlangıç değeri girin: "
baslangic = gets.chomp.to_i
print "Bitişdeğeri girin: "
bitis     = gets.chomp.to_i
print "Artış değeri girin: "
artis     = gets.chomp.to_i

baslangic.step bitis, artis do |index|
  puts index
end
