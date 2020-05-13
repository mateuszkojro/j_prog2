mkdir $1
cd $1
touch $1.cbp
echo "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" ?>
<CodeBlocks_project_file>
	<FileVersion major=\"1\" minor=\"6\" />
	<Project>
		<Option title=\"${1}\" />
		<Option pch_mode=\"2\" />
		<Option compiler=\"gcc\" />
		<Build>
			<Target title=\"Release\">
				<Option output=\"bin/Release/${1}\" prefix_auto=\"1\" extension_auto=\"1\" />
				<Option object_output=\"obj/Release/\" />
				<Option type=\"1\" />
				<Option compiler=\"gcc\" />
				<Compiler>
					<Add option=\"-O2\" />
				</Compiler>
				<Linker>
					<Add option=\"-s\" />
				</Linker>
			</Target>
		</Build>
		<Compiler>
			<Add option=\"-Wall\" />
			<Add option=\"-fexceptions\" />
		</Compiler>
		<Unit filename=\"main.cpp\" />
		<Extensions />
	</Project>
</CodeBlocks_project_file>" > $1.cbp
cd ..
cp $2 $1/main.cpp
zip -r $1.zip $1
