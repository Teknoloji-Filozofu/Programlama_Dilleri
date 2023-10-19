=begin
$ --> global değişkenlerdir uygulama içerisinde 
        istenilen yerde kullanılabilir
@ --> örnek değişlenlerdir sınıf içinde metotlar 
        arasında kullanılır
[a-z] --> yerel değişkenler
[A-Z] --> sabitler
@@ --> sınıf değişkenidir kalıtım yoluyla gelen 
        sınıflardaki değişkenlere erişim sağlar
=end

a = 5
PI = 3.14
$b = "oktay" 
@t = "sadık"
@@l = "bicici"

puts a 
puts PI 
puts $b 
puts @t
puts @@l