<?php
//��������� ���-����� vLauncher

//���� ������ �����������
$host = "localhost";
$user = "root";
$password = "1234";
$dbase = "minecraft_test";

//������ vLauncher
$vlauncher_version="2.0.0.10";

//��������� ���� �� ���������� ����� ���������
$secret_key='AO956aEWCCEAFFASEGBD';

//����� �� ������� ("../" - ������� �� ���� ���������� �����)
$skin_dir="../MinecraftSkins/"; //���� ������������ ����� vLauncher.php
//�����, ������� ���������� ��������� ��� ����������� ��������.
//������! ����� ���������� ����� �� �������� �������!
$mini_list=array(

"client/bin/minecraft.jar",
"client/servers.dat",
"client/bin/jinput.jar",
"client/bin/lwjgl.jar"

);



/**********************************************/
/*��� ����� �������� ������ ��� �������������!*/
/**********************************************/
function check_login($token_sault)
{
	global $host, $user, $password, $dbase, $secret_key;
	$login=$_GET['login'];
	$token=$_GET['token'];
	if ((!preg_match('/^[a-z0-9_-]+$/is', $login)))
		die("������������ �������!");
	$DB=mysql_connect($host, $user, $password);
	mysql_select_db($dbase, $DB);
	$result = mysql_query('SELECT * FROM users WHERE login="'.$login.'"');
	echo mysql_error();
	if(mysql_num_rows($result) == 0)
		die("�������� ����� �/��� ������!");
	if($token==md5(mysql_result($result,0,'pass').$secret_key.$token_sault))
		return true;
	else
		die("�������� ����� �/��� ������!");
}

function registration()
{
	global $host, $user, $password, $dbase;
	$login=$_GET['login'];
	$pass=$_GET['regpass'];
	$pass2=$_GET['regpass2'];
	$email=$_GET['email'];
	if(strlen($login) == 0){
    die("������� �� ��� ������");
    }elseif(strlen($pass) == 0){
    die("������� �� ��� ������");
    }elseif(strlen($pass2) == 0){
    die("������� �� ��� ������");
    }elseif(strlen($email) == 0){
    die("������� �� ��� ������");
    }
	if ((!preg_match('/^[a-z0-9_-]+$/is', $login)))
		die("������������ �������!");
    elseif (!preg_match("[@]",$email))
        die("Email ������ �������!");
	$DB=mysql_connect($host, $user, $password);
	mysql_select_db($dbase, $DB);
	
	$eMailProverka = mysql_query("SELECT email FROM users WHERE email ='{$email}'") or die ("������ � ���� ���������� �������.".mysql_error());
    if (mysql_num_rows($eMailProverka))
    die("��������� email ��� ����������!");
    $ProverkaUser = mysql_query("SELECT login FROM users WHERE login ='{$login}'") or die ("������ � ���� ���������� �������.".mysql_error());
    if (mysql_num_rows($ProverkaUser))
    die("��������� ����� ��� ����������!");
	
	if($pass != $pass2)
    die("������ �� ���������!");
	
	$md5pass = md5($pass);
	
	if (mysql_query("INSERT INTO users (login,pass,email) VALUES('$login','$md5pass','$email')"))
	return true;
	else
	die("������ ����������� � ��!\n���������� ������������������ �����.");
}

function changepassword()
{
	global $host, $user, $password, $dbase;
	$login=$_GET['login'];
	$oldpass=$_GET['oldpass'];
	$newpass=$_GET['newpass'];
	$newpass2=$_GET['newpass2'];
	if(strlen($login) == 0){
    die("������� �� ��� ������");
    }elseif(strlen($oldpass) == 0){
    die("������� �� ��� ������");
    }elseif(strlen($newpass) == 0){
    die("������� �� ��� ������");
    }elseif(strlen($newpass2) == 0){
    die("������� �� ��� ������");
    }
	if ((!preg_match('/^[a-z0-9_-]+$/is', $login)))
		die("������������ �������!");
	$DB=mysql_connect($host, $user, $password);
	mysql_select_db($dbase, $DB);
	
	if($newpass != $newpass2)
    die("������ �� ���������!");
	
	$md5oldpass = md5($oldpass);
    $resultat = mysql_query("SELECT * FROM users WHERE login = '$login' AND pass = '$md5oldpass'");
    $array = mysql_fetch_array($resultat);
    if (empty($array)){
        die("�������� ����� ��� ������");
    }
    elseif (mysql_num_rows($resultat) > 0){

    $md5newpass = md5($newpass);
    mysql_query("UPDATE users SET pass = '$md5newpass' WHERE login = '$login'");
    return true;
    }
	else
	die("������ ����������� � ��!\n���������� �����.");	
}

function restorepassword()
{
	global $host, $user, $password, $dbase;
	$login=$_GET['login'];
	$email=$_GET['email'];
	if(strlen($login) == 0){
    die("������� �� ��� ������");
    }elseif(strlen($email) == 0){
    die("������� �� ��� ������");
    }
	if ((!preg_match('/^[a-z0-9_-]+$/is', $login)))
		die("������������ �������!");
    elseif (!preg_match("[@]",$email))
        die("Email ������ �������!");
	$DB=mysql_connect($host, $user, $password);
	mysql_select_db($dbase, $DB);
	
    $resultat = mysql_query("SELECT * FROM users WHERE login ='{$login}' AND email ='{$email}'");
    $array = mysql_fetch_array($resultat);
    if (empty($array)){
        die("�������� ����� ��� email");
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
    $title = '������������� ������ ������������ '.$login.' ��� vLauncher-�!';
    $letter = '�� ��������� �������������� ������ ��� �������� '.$login.' � vLauncher-�.<br> ��� ����� ������: '.$password.'<br> � ��������� ������������� BS4BG';
    $from = 'administration@vlauncher.ru';

    if (mail($mail, $title, $letter, "From: $from
    Reply-To: $from
    Content-Type: text/html; charset=windows-1251
    Content-Transfer-Encoding: 8bit")) {
    if (mysql_query("UPDATE users SET pass = '$newmdPassword' WHERE login = '$login' AND email = '$email'"))
    return true;
	else
	die("������ ����������� � ��!\n���������� �����.");
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
			die("������ ������ � ����!");
		else
			die("OK");
	}
die("�������� ���������� ��������!");
?>