# ATM-project
Simple banking simulation in C using functions and pointers.
# 🏦 C Dilinde Basit Banka Uygulaması

Bu proje, **C programlama dili** kullanılarak yazılmış basit bir banka simülasyonudur.
Kullanıcı; bakiye görüntüleme, para çekme ve para yatırma işlemlerini terminal üzerinden gerçekleştirebilir.

---

## 📌 Özellikler

* Bakiye görüntüleme
* Para çekme
* Para yatırma
* Sürekli çalışan menü sistemi (while döngüsü)
* Pointer kullanımı ile bakiye güncelleme mantığı

---

## 🧠 Kullanılan Temel Konular

Bu proje aşağıdaki C konularını pekiştirmek amacıyla yazılmıştır:

* Fonksiyonlar
* Pointer kullanımı
* Switch-case yapısı
* Sonsuz döngü (while)
* Kullanıcıdan veri alma (scanf)

---

## 📂 Program Akışı

Program başladığında kullanıcıyı bir menü karşılar:

1. Bakiye Görüntüle
2. Para Çek
3. Para Yatır
4. Çıkış

Kullanıcı seçim yaparak ilgili işlemi gerçekleştirebilir.

---

## ⚙️ Fonksiyonlar

### `bakiye_goster(float bakiye)`

Mevcut bakiyeyi ekrana yazdırır.

---

### `para_cek(float *bakiye_ptr, float miktar)`

* Eğer bakiye yeterliyse çekim yapılır.
* Yetersiz bakiye durumunda hata mesajı verir.

---

### `para_yatir(float *bakiye_ptr, float miktar)`

* Pointer kullanarak bakiyeye para ekleme mantığını gösterir.

---

## ▶️ Programı Çalıştırma

Terminalde aşağıdaki komutları kullanarak çalıştırabilirsiniz:

```bash
```

---

## 🎯 Amaç

Bu proje;

* Pointer mantığını anlamak
* Fonksiyonlarla veri güncellemeyi öğrenmek
* Basit bir gerçek hayat senaryosu üzerinden C pratiği yapmak

amacıyla geliştirilmiştir.

---

## 🚀 Geliştirilebilir

İleride eklenebilecek özellikler:

* Gerçek bakiye güncelleme işlemleri
* Şifre ile giriş sistemi
* Günlük işlem geçmişi
* Dosyaya kayıt (File I/O)

---

## 👩‍💻 Geliştirici

Simge Afşin
Bilgisayar Mühendisliği Öğrencisi
