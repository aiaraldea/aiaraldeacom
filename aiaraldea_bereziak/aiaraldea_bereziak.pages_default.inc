<?php

/**
 * Implementation of hook_default_page_manager_pages().
 */
function aiaraldea_bereziak_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'amurrioko_jaiak_2013';
  $page->task = 'page';
  $page->admin_title = 'Amurrioko Jaiak 2013';
  $page->admin_description = '';
  $page->path = 'bereziak/jaiak/amurrio/2013/egitaraua2';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_amurrioko_jaiak_2013_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'amurrioko_jaiak_2013';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panela',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Amurrioko Jaiak 2013';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Amurrioko jaien egitaraua',
      'title' => '',
      'body' => '    <h2>2013ko Jaiak Baino Lehenagoko Ekitaldiak</h2>
    <h3>Abuztuak 3, Larunbata</h3>
    <ul>
      <li><strong>18:00</strong> San Rokeren baselizatik Andra Mariaren Elizara
        santuaren jaitsiera. Antolatzailea: Vera Cruz Kofradia. Autobusak: 17:30
        eta 17:45ean: Elizako errotondako bus geltokian, 17:35 eta 17:50ean
        Aretxondo Tabernan. </li>
    </ul>
    <h2>2013ko Jaietako Programa</h2>
    <h3>Abuztuak 9, Ostirala</h3>
    <h4>Txupinazoa</h4>
    <ul>
      <li><strong>9:30-13:30</strong> <strong>Odol-ematea</strong>. Jaiei
        elkartasunez ekingo diegu odola emateko autobusean, Larrinaga kaleko
        oinezkoen gunean. </li>
      <li><strong>11:00</strong> <em>Amurrioko Hiribildua</em> <strong>Pilota
          Txapelketa</strong>ko Finalerdiak, Udal Pilotalekuan. </li>
      <li><strong>12:00</strong> Paella txapelketa</li>
      <li><strong>13:00</strong> <strong>Koadrilen aurkezpena</strong> Juan
        Urrutia plazan. (*)</li>
      <li><strong>13:30</strong> Herriko plazan - Jai Herrikoien Aldeko
        Txupinazoa eta Koadrilen pankarten aurkezpena (*)</li>
      <li><strong>14:30</strong> Paella txapelketaren sari banaketa<br>
        Bazkalostean Parkean - Bertsosaioa Ainhoa Comas eta Ohiane Perearen
        eskutik (*)</li>
      <li><strong>18:30</strong> Kale animazioa Betijai <strong>fanfarrea</strong>rekin.
        </li>
      <li><strong>18:30</strong> Udaletxeko Aretoan jaietako <strong>pregoiaren
          irakurketa</strong>, Josefina Burutxagaren eskutik. Arabako
        odolemaileen elkarteko ordezkaria Amurrion. </li>
      <li><strong>18:45</strong> Jaietako Koadrilen Ordezkarien <strong>aurkezpena</strong>
        eta bandak jartzea. </li>
      <li><strong>19:00</strong> Herriko Jaietako <strong>txupinazoa</strong>
        airera bota eta Iguarrakoaren jaitsiera, <em>Euskotarrak</em>, <em>Dantza
          Lagunak</em>, <em>Trot-Art</em>, <em>El Boli</em> eta <em>Herriarenak</em>
        koadrilen kalejira, Builaka perkusio taldeak eta erraldoi bikoteak
        lagundurik. </li>
      <li><strong>22:30</strong> <strong>Berbena</strong> Crystal taldearekin
        Juan Urrutia plazan. </li>
      <li><strong>23:00</strong> Kontzertuak (*):
        <ul>
          <li>Priscila Band</li>
          <li>Bad Sound System</li>
        </ul>
      </li>
    </ul>
    <h3>Abuztuak 10, Larunbata</h3>
    <h4>Haurren Eguna</h4>
    <ul>
      <li><strong>10:00</strong> <strong>Txirrindularitza</strong> Sari
        NagusiA, LX Aiara Zirkuitua, Elite eta Sub23 mailak, Arabako Txapelketa
        eta <em>Daniel Albizuaren omenezko lasterketa</em>. </li>
      <li><strong>11:00</strong> Egun osoan zehar <strong>plater-tiroketa</strong>,
        <em>Urrezko Iguarrako Jai Trofeoa</em>, Larrabeko <em>Isidro Arteta</em>
        Tiro Zelaian. </li>
      <li><strong>11.00</strong> <strong>Xake erakustaldia</strong>,
        itsu-partidak eta aldi berekoak kultura etxearen aurrean. </li>
      <li><strong>11:00-14:00</strong> Juan Urrutia parkean <strong>haur-parke</strong>
        handia 4 puzgarri, Crazy-bike zirkuitoa, 10 Videogame pantaila,
        jolasgunea (billar, futbolina, eta ping-pong), Wii gunea 10
        pantailarekin, jolas erraldoiak, tailerrak eta ludoteka puzgarria (euria
        eginez gero, Matias Landaburura eramango da). </li>
      <li><strong>12:00</strong> <em>Amurrioko hiribildua</em> <strong>pilota
          txapelketa</strong>ko Finalak, Udal Pilotalekuan. </li>
      <li><strong>13:00</strong> Txirrindulari lasterketako sari banaketa. </li>
      <li><strong>14:00</strong> <strong>Haurrentzako bazkaria</strong>,
        paella, udal parkean herriko sukaldari, Aurreraka eta Amurrioko Eskaut
        taldearen laguntzarekin.(euria eginez gero, San Anton plazan izango da)
      </li>
      <li><strong>14:30</strong> Parkean - Bazkari Herrikoia (*)</li>
      <li><strong>15:00-18.00</strong> <strong>Haur jolasak</strong> Udal
        Parkean, Aspaltza Elkartearen eskutik. </li>
      <li><strong>17:00</strong> Txokogorrin - "Gotzon Landeta" IX. Mus
        Txapelketa (*)</li>
      <li><strong>18:00</strong> Guk Pasealekutik - Kale-Kontzertu-Poteoa (*)</li>
      <li><strong>18:00</strong> Profesionalen <strong>pilota partidua</strong>,
        Udal Pilotalekuan. Olaizola II-Zabala// Bengoetxea VI-Beroiz </li>
      <li><strong>18:15</strong> <strong>Txokolatada</strong> parkean,
        Koadrilek antolaturik.(euria eginez gero, San Anton plazan) </li>
      <li><strong>19:00</strong> <strong>Txistularien kontzertu</strong>
        handia, bertsolari, abesbatza, eta musikari talde baten laguntzaz, Guk
        eskulturaren inguruan. (Euria eginez gero, San Anton plazan) </li>
      <li><strong>21:00-24:00</strong> <strong>Dantzaldia</strong>, Trío Menfis
        taldearekin, Larrinaga kaleko oinezkoen gunean. </li>
      <li><strong>24:00</strong> Kontzertua <strong>Vendetta</strong>
        Ska-reggae taldearekin, <em>fuimos, Somos Y Seremos</em> tourra. </li>
      <li><strong>00:30</strong> <strong>Alkohol Tasa Neurtzeko Kanpaina</strong>
        Larrinaga kalean. </li>
      <li><strong>01:30</strong> Txosnagunetik - Gazte Mugimenduaren
        Manifestazioa (*)</li>
      <li><strong>02:00</strong> Txosnagunean - Erromeria HONAT (*)</li>
    </ul>
    <h3>Abuztuak 11, Igandea</h3>
    <ul>
      <li><strong>9.30</strong> IV. <strong>Marmitako lehiaketa</strong>, Juan
        Urrutia plazan, Amurrioko Su-Gozotan gastronomia elkarteak antolaturik.
      </li>
      <li><strong>11:00</strong> Musika animazioa <strong>Trikitixa</strong>rekin.
        </li>
      <li><strong>12:30</strong> <strong>Herri kirolak</strong>, Larrinaga
        kaleko oinezkoen gunean, <em>Amurrioko Hiribildua</em> Aizkolari Saria,
        atsedenaldietan Iñaki Perurena harrijasotzaileak 5 harri ezberdin
        altxatuko ditu , Ingude erakustaldia eta herri lehiaketa. </li>
      <li><strong>13:00</strong> Marmitako Lehiaketako kazolen aurkezpena. </li>
      <li><strong>14:00</strong> Marmitako lehiaketa eta baserriko produktuen
        lehiaketako <strong>Sari Banaketa</strong>. </li>
      <li><strong>17:30</strong> Parkean - <strong>Umeentzako jolasak</strong>
        (*)</li>
      <li><strong>20:00</strong> Txosnagunean - 70, 80 eta 90. hamarkadetak
        musika (*)</li>
      <li><strong>21:00</strong> Txosnagunean - Mozorro Festa, Gaia: ZIRKUA (*)</li>
      <li>Gau osoan zehar, POTE 1 = KANTA 1</li>
      <li><strong>20:30</strong> <strong>Kontzertua</strong>, Musika
        hamabostaldikoa, José Pizarro tenorearekin eta David Aijón
        pianojolearekin San Anton ermitan </li>
      <li><strong>23:00</strong> Parkean - 3x3 <strong>Futbito Txapelketa</strong>
        (*)</li>
    </ul>
    <h3>Abuztuak 12, Astelehena</h3>
    <ul>
      <li><strong>19:00</strong> Lukas Rey Ikastetxean - Areto Futbola
        Erakusketa Eraso Aiara - Babilonia (*)</li>
    </ul>
    <h3>Abuztuak 14, Asteazkena</h3>
    <h4>Koadrilen Eguna Eta Atzoko Gazteen Eguna</h4>
    <ul>
      <li><strong>11:00-14:00</strong> Juan Urrutia parkean <strong>Itxasoaren
          Parkea</strong>, ohe elastikoak, uretako ontzitxoak, balea,
        itxas-ludoteka, surf taula, eazyrollers eta hiru puzgarri (euria eginez
        gero, Matias Landaburura eramango da). </li>
      <li><strong>11:00</strong> Alkate andereak Hiribilduko <strong>pertsonarik
          helduenari</strong> makila emango dio. Jarraian, trikitilariz
        lagundurik elizara abiatuko dira. </li>
      <li><strong>11:30</strong> Andra Mariaren Parrokian <strong>meza</strong>
        Mariaka abesbatzarekin. Jarraian, Udalbatzak<em>San Anton Armuru</em>
        egoitza bisitatuko du. </li>
      <li><strong>12:30</strong> Plazan, adinekoentzako aperitibo eta musika
        animazioa Amurrio Hiribilduko Familia Elkartearen eskutik. </li>
      <li><strong>12:30</strong> <strong>Trikipoteoa</strong> koadrilekin,
        abiapuntua: kiosko ondoan. </li>
      <li><strong>14:00</strong> Atzoko Gazteentzako <strong>anaitasun bazkaria</strong>
        Udal Pilotalekuan. </li>
      <li><strong>14:30</strong> <strong>Koadrilen bazkaria</strong> San Anton
        plazan. </li>
      <li><strong>16:00</strong> <strong>Dantzaldia</strong>, Nueva Presión
        taldearekin Larrinaga kaleko oinezkoen gunean. </li>
      <li><strong>17:00</strong> Iturralde Kalean - <strong>Txapel Jaurtiketa</strong>
        Lehiaketa (*)</li>
      <li><strong>18.00</strong> Koadrilentzako jolasak + sorpresa parkean.</li>
      <li><strong>19:00</strong> Txosnagunetik - Euskal Preso Eta Iheslariak
        Etxera! (*)</li>
      <li><strong>19:30</strong> Andra Mariaren parrokian, lore eskaintza
        Jasokundeko Andra Mariari, Amurrioko Zaindariari. </li>
      <li><strong>20:00</strong> <strong>Odolosteak</strong> San Anton plazan.
        1,50€/ ogitartekoa. </li>
      <li><strong>20:00</strong> <strong>Bertso kupela</strong>, bertsolarien
        saioa eta sagardo dastaketa, AIEBEk antolaturik, parkean.</li>
      <li><strong>20:30</strong> Guk Tabernatik - Jai Herrikoien Aldeko Poteo
        Kalejira <strong>Elektro-Txaranga</strong>rekin (*)</li>
      <li><strong>22:30</strong> <strong>Dantzaldia</strong>, Nueva Presión
        taldearekin, Larrinaga kaleko oinezkoen gunean. </li>
      <li><strong>24:00</strong> Kontzertua Juan Urrutia plazan <strong>Huecco</strong>
        taldearekin, <em>Dame Vida</em> tourra. </li>
      <li><strong>02:00</strong> Txosnagunean - Erromeria <strong>Izargi</strong>
        (*)</li>
    </ul>
    <h3>Abuztuak 15, Asteazkena</h3>
    <h4>Ama Birjinaren Eguna</h4>
    <ul>
      <li><strong>10:00</strong> Kanpai-iraulketa eta suziriak botako dira jaia
        iragartzeko. </li>
      <li><strong>10:00</strong> <strong>Baserriko produktu</strong>en
        erakusketa eta lehiaketa Juan Urrutia plazan. </li>
      <li><strong>10:30</strong> <strong>Dianak</strong>, Amurrioko Trikitixa
        Eskolaren eskutik. </li>
      <li><strong>10:45</strong> Udalbatza, Mariaka eta Marigabon erraldoi
        bikotea, gaiteroak eta trikitilariak Andra Mariaren Elizara abiatuko
        dira. </li>
      <li><strong>11:00</strong> <strong>Meza</strong> nagusia Andra Mariaren
        Parrokian. Irteeran ohorezko aurreskua.</li>
      <li><strong>11:45</strong> Herriko plazatik elizara - Euskal Preso Eta
        Iheslarien Aldeko Giza-Katea<strong></strong> (*)</li>
      <li><strong>12:30</strong> Kalejira Amurrioko <strong>erraldoi</strong>
        eta <strong>buruhandi</strong>ekin. </li>
      <li><strong>12:30</strong> Agintariei eta Jaietako partaideei harrera
        ekitaldia Udaletxean. </li>
      <li><strong>13:00</strong> <strong>Ziza dastaketa</strong>, Arriola
        Mikologa Elkartearen eskutik, Juan Urrutia plazan,0,50€/pintxopotea </li>
      <li><strong>18:00</strong> Zezen-plazarainoko aurkezpen paseoa San Anton
        plazatik. </li>
      <li><strong>18:30</strong> Ikuskizun mixtoa zezen-plazan, <strong>zekorketa</strong>
        pikatua Miguel Angel Moreno eta José Garrido zekorkariekin, Salamankako
        Torrealta jatorrizko Rebesado Anaien ganaduetxeko 4 zekor-zezenekin eta
        Sergio Dominguez burtzikaria, Portugaleko Sobraneko Kontesa ganaduetxeko
        2 zezenekin. </li>
      <li><strong>19:30</strong> <strong>Euskal dantzen erakustaldia</strong>,
        Aiara Dantza Taldearekin Juan Urrutia plazan. </li>
      <li><strong>20:00</strong> Musika animazioa Pepín <strong>Txaranga</strong>rekin
        </li>
      <li><strong>22:30</strong> <strong>Berbena</strong> Mádelon Orkestrarekin
        Juan Urrutia plazan. </li>
      <li><strong>00:00</strong> Parkean - <strong>Basati Kirolak</strong> (*)</li>
    </ul>
    <h3>Abuztuak 16, Ostirala</h3>
    <h4>San Roke</h4>
    <ul>
      <li><strong>8:30 - 15:00</strong> , San Rokeko zelaietara joan eta
        etortzeko <strong>doako autobusa</strong>. Gasolindegitik autobusa ordu
        erdiro irtengo da. Geralekuak: Elizako errotonda eta San Jose Eliza. </li>
      <li><strong>10:00</strong> Andra Mariaren elizatik <strong>santuaren
          igoera</strong> San Rokeren baselizaraino. Santa Vera Cruz Kofradiak
        antolaturik. </li>
      <li><strong>10:30</strong> <strong>Ganadu erakusketa</strong>, Done
        Errokeren Feria 2013. </li>
      <li><strong>11:00</strong> Musika animazioa <strong>trikitixa</strong>rekin
        San Rokeko zelaietan. </li>
      <li><strong>11:00</strong> Jota eta aurresku lehiaketarako inskripzioa
        eszenatoki ondoan. </li>
      <li><strong>11:30</strong> San Rokeko zelaian, <strong>meza</strong>
        nagusia, Mariaka Abesbatzarekin. </li>
      <li><strong>12:00</strong> <strong>Aurresku eta Joten XLVIII Txapelketa</strong>
        Aiara Dantza Taldeak antolaturik. </li>
      <li><strong>13:00</strong> <strong>Meza</strong> San Rokeren baselizan,
        Koadriletako beteranoen omenez. </li>
      <li><strong>15:00</strong> <strong>Anaitasun bazkaria</strong>, <em>XXIII.
          Betikoen Eguna</em>, azken urteotako jatetxean. </li>
      <li><strong>17:00-20:00</strong> Faunolandia <strong>haur parkea</strong>,
        30 jolas erraldoi, mahai-jolasak, trebetasun, punteria, zorroztasun
        jolasak, etab. Elexondo pasealekutik Guk eskultura arteko gunean (euria
        eginez gero, Matias Landaburura eramango da). </li>
      <li><strong>18:30</strong> <em><strong>Errekortadore</strong> lehiaketa</em>
        Toropasión enpresaren eskutik, Zezen plazan. </li>
      <li><strong>20:00</strong> <em>Starfatal</em> <strong>kale ikuskizuna</strong>
        <em>Los 2play</em> konpainiarekin Juan Urrutia plazan. </li>
      <li><strong>22:00</strong> <strong>Karroza desfilea</strong> koadrilen
        eskutik, Mariaka Eta Marigabon erraldoi bikotearen laguntzaz. Zirkuitoa:
        Elizako errotondatik Aldai kaleraino, gasolindegiraino. </li>
      <li><strong>23:00</strong> Juan Urrutia plazan dantzaldia <strong>Akerbeltz</strong>
        Taldearekin. </li>
      <li><strong>00:30</strong> Karroza lehiaketaren <strong>sari banaketa</strong>
        Juan Urrutia plazan.</li>
      <li><strong>01:00</strong> Parkean - Babiora Bidea (*)</li>
      <li><strong>02:00</strong> Txosnagunean - Irrintzi Txapelketa (*)</li>
    </ul>
    <h3>Abuztuak 17, Larunbata </h3>
    <h4>San Rokeren Errepikapena </h4>
    <ul>
      <li><strong>8:30 - 15:00</strong> eta <strong>17:00-19:30</strong>, San
        Rokeko zelaietara joan eta etortzeko <strong>doako autobusa</strong>.
        Gasolindegitik autobusa ordu erdiro irtengo da. Geralekuak: Elizako
        errotonda eta San Jose Eliza. </li>
      <li><strong>9:00</strong> XXXVII. Pil-pil erako bakailao eta XIII.
        patata-tortila lehiaketarako izen ematea, Mendiko Lagunak Taldeak
        antolaturik, San Roken. </li>
      <li><strong>11:30</strong> San Rokeko zelaian <strong>meza</strong>
        nagusia, Mariaka Abesbatzarekin. </li>
      <li><strong>12:30</strong> <strong>Patata-tortilen</strong> aurkezpena. </li>
      <li><strong>13:00</strong> <strong>Bakailao lehiaketako kazolen</strong>
        aurkezpena. </li>
      <li><strong>14.30</strong> Pil-pil erako bakailao eta patata-tortila
        lehiaketako <strong>sari banaketa</strong>. </li>
      <li><strong>14:30</strong> <strong>Anaitasun bazkari</strong>a gure
        herriko sukaldari hoberenen eskutik. Bazkaria/ 1,50€ </li>
      <li><strong>16:00</strong> <strong>Dantzaldia</strong> San Rokeko
        zelaietan <em>Ganeko</em> taldearekin. </li>
      <li><strong>19:00</strong> <strong>Futbol Partidua</strong>, Basarteko
        futbol zelaian, Amurrio Klubak antolatuta. Doako sarrera. </li>
      <li><strong>20:00</strong> <em>Great Circus Show</em> <strong>kale
          ikuskizuna</strong> <em>El Gran Dimitri</em>rekin, Juan Urrutia
        plazan. </li>
      <li><strong>22:00</strong> Berbena orots taldearekin, Juna Urrutia plazan.
      </li>
      <li><strong>23:45</strong> Iguarrakoaren agurra egiteko <strong>desfilea</strong>,
        Andra Mariaren elizatik Juan Urrutia plazaraino, mozorratutako
        auzokideen parte hartzeaz. Anima zaitez! </li>
      <li><strong>24:00</strong> 2013ko herriko jaietako amaiera hurrengo urtera
        arteko <strong>Iguarrakoaren itzulerare</strong>kin. Bengalak banatu
        eta bateria piroteknikoak botako dira.</li>
      <li><strong>00:30</strong> Txosnagunean - Barriketatik Gibeletara (*)</li>
      <li><strong>01:00</strong> Txosnagunean - Jai Herrikoien Aldeko Zozketa
        (*)</li>
    </ul>
    <h2>Jaietan: </h2>
    <h5>Txartel berezia. </h5>
    <p>Amurrioko Radio Klub Aiara (EA2RCA) taldekoek txartel berezia banatuko
      dute. Txartel horrek herriko jaietako kartela izango du bereizgarri
      batekin (ED2FPA). Aipatu txartela kontaktatuko diren munduko
      irrati-amateurren artean banatuko dute. </p>
    <h5>Argazki-erakusketa. </h5>
    <p>Aztarna Etnologia Elkarteak antolaturik, 50 argazki zahar handiren
      erakustaldia, La Casonako Erakusketa Aretoan, Aldai kaleko 2 zenbakian. </p>
    <h5>Oharra: </h5>
    <p>Jai batzordeak ahalmen osoa izango du jai egitarau honetan bere gain
      dagoen edozein ekitaldi aldatzeko edo bertan behera uzteko, egoerak hala
      eskatuz gero. </p>
    <h5>(*)</h5>
    <p>Amurrioko Jai Herrikoen Aldeko Batzordearen egitaraua</p>
    
',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'azken_bideoak_aj2013-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_bereziak';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '25',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Albisteak',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['right'][1] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Aplikazioa Play Storen',
      'title' => 'Android telefonoentzat',
      'body' => '<img src="http://chart.apis.google.com/chart?chs=400x400&cht=qr&chld=M&chl=http://qr.aiaraldea.com/ajapp" />',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-4'] = $pane;
    $display->panels['right'][2] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['amurrioko_jaiak_2013'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'araba_euskaraz_spotify';
  $page->task = 'page';
  $page->admin_title = 'Araba Euskaraz Storify';
  $page->admin_description = '';
  $page->path = 'bereziak/araba-euskaraz/storify2';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_araba_euskaraz_spotify_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'araba_euskaraz_spotify';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Araba Euskaraz Storify',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'rigth',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '62.721308486127434',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'rigth' => array(
        'type' => 'region',
        'title' => 'Rigth',
        'width' => '37.278691513872566',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'rigth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Araba Euskaraz Storify';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<script src="//storify.com/aiaraldea/arabaeuskaraz-txioka.js"></script><noscript>[<a href="//storify.com/aiaraldea/arabaeuskaraz-txioka" target="_blank">View the story "#arabaeuskaraz txioka" on Storify</a>]</noscript>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'rigth';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_bereziak';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_6',
      'override_title' => 1,
      'override_title_text' => 'Albisteak',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['rigth'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'rigth';
    $pane->type = 'views_panes';
    $pane->subtype = 'flickr_image_sets_bereziak-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['rigth'][1] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'rigth';
    $pane->type = 'views';
    $pane->subtype = 'azken_bideoak_bereziak';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 1,
      'override_title_text' => 'Bideoak',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-4'] = $pane;
    $display->panels['rigth'][2] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['araba_euskaraz_spotify'] = $page;

 return $pages;

}
