=begin

herhangi bir koşul olmaksızın döngüyü bitirmediğimiz 
sürece sürekli aynı işlemi tekrarlamasına olanak sağlar
yani sonsuz bir döngü oluşturur

=end

loop{

  print "Kullanıcı adını girin: "

  gets().chomp() != 'enes' ? redo : true

  print "Şifrenizi Girin: "

  break if gets.chomp == '123456'

}

puts "Hoş Geldiniz.."

###############################################

#sonsuza kadar gider
a = 1
loop do
    p a
    puts "sadık oktay biçici"
    break if a == 15
    a += 1
end