RUNTIME=/usr/local/share/dotnet/dotnet
CMD=~/bin/depotdownloader/DepotDownloader.dll

USER=<inset_your_user-here>

APP=504050
COMMON=504051
MACOS=504052
LINUX=504053
WINDOWS=504054

dw() {
	v=$1
	app=$2
	depot=$3
	manifest=$4
	$RUNTIME $CMD -username $USER -remember-password -app $app -depot $depot -manifest $manifest -validate -dir ./depots/$v/app_$app/depot_$depot
	e=$?
	if [ $e -ne 0 ] ; then
		echo Err! $e
		exit $e
	fi
}
