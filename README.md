# euklidov-algoritam-cpp

„Euklidov algoritam je otac svih algoritama, pošto je to najstariji netrivijalni algoritam koji je preživio do danas.“


Euklidov algoritam je algoritam koji je dobio ime po starogrčkom matematičaru Euklidu. To je najefikasniji algoritam kojim određujemo najvećeg zajedničkog djelitelja dva ili više brojeva.


Prvi poznati sačuvani opis Euklidovog algoritma nalazi se u Elementima (300. god. Pr.Kr.) te je time i najstariji numerički algoritam koji se danas još uvijek koristi. U 19. Stoljeću je primijenjen na polinome i Gaussove cijele brojeve te je to dovelo do razvoja apstraktne algebre.  Euklidov algoritam se danas primjenjuje za konstruiranje verižnih razlomaka, u elektronskom poslovanju itd. Također je i osnovno sredstvo za dokazivanje teorema moderne teorije brojeva.




Najveći zajednički djelitelj dva broja je najveći broj koji istovremeno dijeli oba broja bez ostatka. Euklidov algoritam je zasnovan na principu da se najveći zajednički djelitelj dva broja ne mijenja ukoliko se manji broj oduzme od većeg pa se odredi najveći zajednički djelitelj tog novo dobivenog broja i manjeg od prethodna dva.
Uzmimo primjer dva broja kojima je najveći zajednički djelitelj broj 21:  231 i 147 (231 = 21 * 11; 147 = 21 * 7). Kada oduzmemo ta dva broja dobivamo broj 84 te je najveći zajednički djelitelj tog broja i manjeg od ova dva, 147 također 21. Ponavljanjem postupka dobivaju se sve manji brojevi dok se  jedan od njih ne svede na nulu.  U tom trenutku ovaj broj koji nije nula, jednak je najvećem zajedničkom djelitelju dva početna broja.

PRIMJER

Korisnik unosi 3 broja. Program pomoću Euklidovog algoritma računa najveću zajedničku
mjeru brojeva i ispisuje ju na ekran.


(1) Prvo što ćemo napraviti u ovom našem programu je to da ćemo unutar funkcije main deklarirati si polje za unos 3 elementa.


(2) Nakon što je polje deklarirano pomoću for petlje tražimo korisnika da unese tri broja koja pohranjujemo u naše polje.


(3) Sam Euklidov algoritam realizira se pomoću veoma jednostavne funkcije koja je definirana na sljedeći način: funkcija ima povratni tip int, poziva se preko naziva nzm, a kao ulazne vrijednosti zahtjeva argumente a i b. Za pojašnjenje rada ove rekurzije vidi primjer dolje.


(4) Kada smo napisali funkciju za računanje NZM, sljedeće što ćemo napisati je da se nzm računa za upisane brojeve. Nzm ćemo računati na način da ćemo prvo računati nzm od prvog člana i 0 (zbog toga smo i postavili varijablu b na 0). Nakon toga uzeti ćemo
drugi broj u nizu i računati ćemo ga sa dosadašnjom nzm (dosadašnja nzm biti će prvi broj, zato što je nzm nule i bilo kojeg broja upravo taj broj) i tako funkcija iterira dok ne provjeri sve brojeve koji su upisani (u našem slučaju samo njih 3).


(5) Nakon što je provjera završila u varijabli b će biti pohranjena NZM koju onda samo
ispisujemo na ekran.



