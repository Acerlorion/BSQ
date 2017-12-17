# BSQ

Le projet "BSQ" est projet où on devait trouver le plus grand carré dans une carte faite de "o" et de ".".
C'est un projet crée par moi, Paul BEAUDUC, Etudiant d'Epitech.

/// Compilation ///

Lancez le Makefile avec la commande "make" ou "make re". L'éxecutable s'appelle "bsq".

/// Execution ///

Après l'éxecutable, il faut mettre un fichier contenant une carte contenant des "o" et ".". Exemple :
./bsq [map]
Si vous ne voulez pas vous embêtez avec ça voici un le code d'un générateur de map en perl :

#!/usr/bin/perl -w

if ((scalar @ARGV) != 3)
{
	print "program x y density\n";
	exit;
}

my $x = $ARGV[0];
my $y = $ARGV[1];
my $density = $ARGV[2];
my $i = 0;
my $j = 0;

print $y . "\n";

while ($i < $y)
{
	$j = 0;
	while ($j < $x)
	{
		if (int(rand($y)*2) < $density)
		{
			print "o";
		}
		else
		{
			print ".";
		}
		$j++;
	}
	print "\n";
	$i++;
}
