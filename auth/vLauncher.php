<?php
//Настройки веб-части vLauncher

//База данных авторизации
$host = "localhost";
$user = "root";
$password = "1234";
$dbase = "minecraft_test";

//Версия vLauncher
$vlauncher_version="2.0.0.10";

//Секретный ключ из клиентской части программы
$secret_key='AO956aEWCCEAFFASEGBD';

//Папка со скинами ("../" - переход на одну директорию вверх)
$skin_dir="../MinecraftSkins/"; //Путь относительно файла vLauncher.php
//Файлы, которые необходимо проверять при минимальной проверке.
//Ахтунг! После последнего файла не ставится запятая!
$mini_list=array(

"client/bin/minecraft.jar",
"client/servers.dat",
"client/bin/jinput.jar",
"client/bin/lwjgl.jar"

);



/**********************************************/
/*Код далее изменять только при необходимости!*/
/**********************************************/
function check_login($token_sault)
{
	global $host, $user, $password, $dbase, $secret_key;
	$login=$_GET['login'];
	$token=$_GET['token'];
	if ((!preg_match('/^[a-z0-9_-]+$/is', $login)))
		die("Недопустимые символы!");
	$DB=mysql_connect($host, $user, $password);
	mysql_select_db($dbase, $DB);
	$result = mysql_query('SELECT * FROM users WHERE login="'.$login.'"');
	echo mysql_error();
	if(mysql_num_rows($result) == 0)
		die("Неверный логин и/или пароль!");
	if($token==md5(mysql_result($result,0,'pass').$secret_key.$token_sault))
		return true;
	else
		die("Неверный логин и/или пароль!");
}

function registration()
{
	global $host, $user, $password, $dbase;
	$login=$_GET['login'];
	$pass=$_GET['regpass'];
	$pass2=$_GET['regpass2'];
	$email=$_GET['email'];
	if(strlen($login) == 0){
    die("Введены не все данные");
    }elseif(strlen($pass) == 0){
    die("Введены не все данные");
    }elseif(strlen($pass2) == 0){
    die("Введены не все данные");
    }elseif(strlen($email) == 0){
    die("Введены не все данные");
    }
	if ((!preg_match('/^[a-z0-9_-]+$/is', $login)))
		die("Недопустимые символы!");
    elseif (!preg_match("[@]",$email))
        die("Email введен неверно!");
	$DB=mysql_connect($host, $user, $password);
	mysql_select_db($dbase, $DB);
	
	$eMailProverka = mysql_query("SELECT email FROM users WHERE email ='{$email}'") or die ("Запрос к базе завершился ошибкой.".mysql_error());
    if (mysql_num_rows($eMailProverka))
    die("Введенный email уже существует!");
    $ProverkaUser = mysql_query("SELECT login FROM users WHERE login ='{$login}'") or die ("Запрос к базе завершился ошибкой.".mysql_error());
    if (mysql_num_rows($ProverkaUser))
    die("Введенный логин уже существует!");
	
	if($pass != $pass2)
    die("Пароли не совпадают!");
	
	$md5pass = md5($pass);
	
	if (mysql_query("INSERT INTO users (login,pass,email) VALUES('$login','$md5pass','$email')"))
	return true;
	else
	die("Ошибка подключения к бд!\nПопробуйте зарегистрироваться позже.");
}

function changepassword()
{
	global $host, $user, $password, $dbase;
	$login=$_GET['login'];
	$oldpass=$_GET['oldpass'];
	$newpass=$_GET['newpass'];
	$newpass2=$_GET['newpass2'];
	if(strlen($login) == 0){
    die("Введены не все данные");
    }elseif(strlen($oldpass) == 0){
    die("Введены не все данные");
    }elseif(strlen($newpass) == 0){
    die("Введены не все данные");
    }elseif(strlen($newpass2) == 0){
    die("Введены не все данные");
    }
	if ((!preg_match('/^[a-z0-9_-]+$/is', $login)))
		die("Недопустимые символы!");
	$DB=mysql_connect($host, $user, $password);
	mysql_select_db($dbase, $DB);
	
	if($newpass != $newpass2)
    die("Пароли не совпадают!");
	
	$md5oldpass = md5($oldpass);
    $resultat = mysql_query("SELECT * FROM users WHERE login = '$login' AND pass = '$md5oldpass'");
    $array = mysql_fetch_array($resultat);
    if (empty($array)){
        die("Неверный логин или пароль");
    }
    elseif (mysql_num_rows($resultat) > 0){

    $md5newpass = md5($newpass);
    mysql_query("UPDATE users SET pass = '$md5newpass' WHERE login = '$login'");
    return true;
    }
	else
	die("Ошибка подключения к бд!\nПопробуйте позже.");	
}

function restorepassword()
{
	global $host, $user, $password, $dbase;
	$login=$_GET['login'];
	$email=$_GET['email'];
	if(strlen($login) == 0){
    die("Введены не все данные");
    }elseif(strlen($email) == 0){
    die("Введены не все данные");
    }
	if ((!preg_match('/^[a-z0-9_-]+$/is', $login)))
		die("Недопустимые символы!");
    elseif (!preg_match("[@]",$email))
        die("Email введен неверно!");
	$DB=mysql_connect($host, $user, $password);
	mysql_select_db($dbase, $DB);
	
    $resultat = mysql_query("SELECT * FROM users WHERE login ='{$login}' AND email ='{$email}'");
    $array = mysql_fetch_array($resultat);
    if (empty($array)){
        die("Неверный логин или email");
    }
    elseif (mysql_num_rows($resultat) > 0){
    $chars="qazxswedcvfrtgbnhyujmkiolp1234567890QAZXSWEDCVFRTGBNHYUJMKIOLP";
    $max=10;
    $size=StrLen($chars)-1;
    $password=null;

    while($max--) {
        $password.=$chars[rand(0,$size)];
    }
    $newmdPassword = md5($password);
    $title = 'Востановления пароля пользователю '.$login.' для vLauncher-а!';
    $letter = 'Вы запросили восстановление пароля для аккаунта '.$login.' в vLauncher-е.<br> Ваш новый пароль: '.$password.'<br> С уважением админестрация BS4BG';
    $from = 'administration@vlauncher.ru';

    if (mail($mail, $title, $letter, "From: $from
    Reply-To: $from
    Content-Type: text/html; charset=windows-1251
    Content-Transfer-Encoding: 8bit")) {
    if (mysql_query("UPDATE users SET pass = '$newmdPassword' WHERE login = '$login' AND email = '$email'"))
    return true;
	else
	die("Ошибка подключения к бд!\nПопробуйте позже.");
    }
    }                           
}

function GetListFiles($folder,&$all_files)
{

    $fp=opendir($folder);
    while($cv_file=readdir($fp)) 
	{
        	if(is_file($folder."/".$cv_file)) 
		{
            		$all_files[]=$folder."/".$cv_file."*".md5_file($folder."/".$cv_file)."*";
        	}
		elseif($cv_file!="." && $cv_file!=".." && is_dir($folder."/".$cv_file))
		{
            GetListFiles($folder."/".$cv_file,$all_files);
        	}
    	}
    closedir($fp);
}

$action = $_GET['action'];
if ($action=="getversion")
	die($vlauncher_version);
if ($action=="register")
	if (registration(""))
		die("OK");
if ($action=="changepass")
	if (changepassword(""))
		die("OK");
if ($action=="restorepass")
	if (restorepassword(""))
		die("OK");
if ($action=="auth")
	if (check_login(""))
		die("OK");
if ($action=="getfiles")
{
	$all_files=array();
	if ($_GET['mode']==mini)
	{
		for($i=0; $i<sizeof($mini_list); $i++)
			echo $mini_list[$i]."*".md5_file($mini_list[$i])."*";
	die();
	}
	else
	{
		GetListFiles("client",$all_files);
		for($i=0; $i<sizeof($all_files); $i++)
			echo $all_files[$i];
	}
}
if ($action=="getskinpath")
	die($skin_dir);
if ($action=="setskin")
	if(check_login(strlen($_GET['img_data'])."skin"))
	{		
		$login=$_GET['login'];
		$img_data=$_GET['img_data'];
		$img_data=str_replace(' ','+',$img_data );
		$fp=fopen($skin_dir.$login.'.png', 'w');
		$written=fwrite($fp, base64_decode($img_data,false));
		fclose($fp);
		if (!$written)
			die("Ошибка записи в файл!");
		else
			die("OK");
	}
die("Неверный дескриптор действия!");
?>