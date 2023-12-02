<pre>
#include &lt;iostream&gt;

struct Code
{
    int days;
    bool problem;
};

int main()
{
    Code code;
    code.days = 0;
    code.problem = false;
    cin>>"Did you do a prblem today?">>code.problem;
    while (code.days < 365)
    {
        if (code.problem)
        {
            code.days++;
        }
        else
        {
            std::cout &lt;&lt; You Failed" &lt;&lt; std::endl;
            code.days=0;
        }
      code.problem = false;
    }

    return 0;
}
</pre>






Im gonna take up this crazy challenge where i will be doing Leet Code Probelems Daily for the next 365 Days

Lets see where this takes me in my coding journey
