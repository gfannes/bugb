here_dir = File.dirname(__FILE__)

task :default do
    sh("rake -T")
end

desc("Run the unit tests")
task :test do
    sh("xmake build -v unit_tests")
    sh("xmake run unit_tests")
end

desc("Clean")
task :clean do
    sh("xmake clean")
end

desc("Generate .clangd file")
task :clangd do
    File.open('.clangd', 'w') do |fo|
        fo.puts("CompileFlags:")
        fo.puts("    Add: [-std=c++20, -I#{File.join(here_dir, 'src')}]")
    end
end
