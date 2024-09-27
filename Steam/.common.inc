RUNTIME=/usr/local/share/dotnet/dotnet
CMD=~/bin/depotdownloader/DepotDownloader.dll

USER=<inset_your_user-here>

APP=504050
COMMON=504051
MACOS=504052
LINUX=504053
WINDOWS=504054

dw() {
	app=$1
	depot=$2
	manifest=$3
	$RUNTIME $CMD -username $USER -remember-password -app $app -depot $depot -manifest $manifest -validate
	e=$?
	if [ $e -ne 0 ] ; then
		echo Err! $e
		exit $e
	fi
}
