// import required classes and packages  
packagejavaTpoint.javacodes;  
import java.io.*;  
importjava.util.*;  
// create FileExample class to copy data of one file into another  
publicclassFileExample {  
    // create coptData() method that copy data of file1 into file2  
    publicstaticvoidcopyData(File file1, File file2) throws Exception  
    {  
        // create instances of FileInputStream and FileOutputStream classes for file1 and file2  
        FileInputStreaminputStream = newFileInputStream(file1);  
        FileOutputStreamoutputStream = newFileOutputStream(file2);  
        // use try-catch-finally block to read and write bytes data into file  
        try {  
            // declare variable for indexing  
            inti;  
            // use while loop with read() method of FileInputStream class to read bytes data from file1  
            while ((i = inputStream.read()) != -1) {  
                  
                // use write() method of FileOutputStream class to write the byte data into file2  
                outputStream.write(i);  
            }  
        }  
        // catch block to handle exceptions  
        catch(Exception e) {  
            System.out.println("Error Found: "+e.getMessage());  
        }  
        // use finally to close instance of the FileInputStream and FileOutputStream classes  
        finally {  
            if (inputStream != null) {  
        // use close() method of FileInputStream class to close the stream  
                inputStream.close();  
            }  
            // use close() method of FileOutputStream class to close the stream  
            if (outputStream != null) {  
                outputStream.close();  
            }  
        }  
        System.out.println("File Copied");  
    }  
    // main() method start  
    publicstaticvoid main(String[] args) throws Exception  
    {  
        // create scanner class object to take file name from user  
        Scanner sc = newScanner(System.in);  
        // get the file from which the data would be copied.  
        System.out.println("Enter the name of the file from where the data would be copied :");  
        String file1 = sc.nextLine();  
        // create instance of the File class for the source file   
        File a = newFile("C:\\Users\\pc\\OneDrive\\Desktop\\"+file1);  
  
        // get the file in which the data would be written.  
        System.out.println("Enter the name of the file from where the data would be written :");  
        String file2 = sc.nextLine();  
        // create instance of the File class for the destination file  
        File b = newFile("C:\\Users\\pc\\OneDrive\\Desktop\\"+file2);  
        sc.close();  
        // method called to copy the data from file a to file b  
        copyData(a, b);  
    }  
}  